/**
 * ,---------,       ____  _ __
 * |  ,-^-,  |      / __ )(_) /_______________ _____  ___
 * | (  O  ) |     / __  / / __/ ___/ ___/ __ `/_  / / _ \
 * | / ,--'  |    / /_/ / / /_/ /__/ /  / /_/ / / /_/  __/
 *    +------`   /_____/_/\__/\___/_/   \__,_/ /___/\___/
 *
 * Crazyflie control firmware
 *
 * Copyright (C) 2021 Bitcraze AB
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, in version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "mm_sweep_angles.h"
#include "debug.h"
#include "estimator_kalman.h"


void kalmanCoreUpdateWithSweepAngles(kalmanCoreData_t *this, sweepAngleMeasurement_t *sweepInfo, const uint32_t nowMs, OutlierFilterLhState_t* sweepOutlierFilterState) {
  // point_t cfPosP; //wc: added for logging
  // estimatorKalmanGetEstimatedPos(&cfPosP);
  // vec3d cfPos = {cfPosP.x, cfPosP.y, cfPosP.z}; //wc: added for logging
  // DEBUG_PRINT("cfPos1: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);
  
  
  
  // Rotate the sensor position from CF reference frame to global reference frame,
  // using the CF roatation matrix
  vec3d s;
  arm_matrix_instance_f32 Rcf_ = {3, 3, (float32_t *)this->R};
  arm_matrix_instance_f32 scf_ = {3, 1, (float32_t *)*sweepInfo->sensorPos};
  arm_matrix_instance_f32 s_ = {3, 1, s};
  mat_mult(&Rcf_, &scf_, &s_);

  //wc: edit for logging
  // float32_t* s_data = s_.pData;
  // DEBUG_PRINT("s_data: %f, %f, %f\n", (double)s_data[0], (double)s_data[1], (double)s_data[2]);
  // estimatorKalmanGetEstimatedPos(&cfPosP);
  // DEBUG_PRINT("cfPos2: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);

  //wc: print kalman position estimations
  

  // Get the current state values of the position of the crazyflie (global reference frame) and add the relative sensor pos
  vec3d pcf = {this->S[KC_STATE_X] + s[0], this->S[KC_STATE_Y] + s[1], this->S[KC_STATE_Z] + s[2]};

  // DEBUG_PRINT("pcf: %f, %f, %f\n", (double)pcf[0], (double)pcf[1], (double)pcf[2]); //wc:edit

  // Calculate the difference between the rotor and the sensor on the CF (global reference frame)
  const vec3d* pr = sweepInfo->rotorPos;
  vec3d stmp = {pcf[0] - (*pr)[0], pcf[1] - (*pr)[1], pcf[2] - (*pr)[2]};
  arm_matrix_instance_f32 stmp_ = {3, 1, stmp};
  
  //wc: edit for logging
  // estimatorKalmanGetEstimatedPos(&cfPosP);
  // DEBUG_PRINT("cfPos3: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);
  // DEBUG_PRINT("stmp: %f, %f, %f\n", (double)stmp[0], (double)stmp[1], (double)stmp[2]); //wc:edit

  // Rotate the difference in position to the rotor reference frame,
  // using the rotor inverse rotation matrix
  vec3d sr;
  arm_matrix_instance_f32 Rr_inv_ = {3, 3, (float32_t *)(*sweepInfo->rotorRotInv)};
  arm_matrix_instance_f32 sr_ = {3, 1, sr};
  mat_mult(&Rr_inv_, &stmp_, &sr_);

  //wc: logging
  // estimatorKalmanGetEstimatedPos(&cfPosP);
  // DEBUG_PRINT("cfPos4: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);
  // float32_t* sr_data = sr_.pData;
  // DEBUG_PRINT("sr: %f, %f, %f\n", (double)sr_data[0], (double)sr_data[1], (double)sr_data[2]); //wc:edit

  // The following computations are in the rotor refernece frame
  const float x = sr[0];
  const float y = sr[1];
  const float z = sr[2];
  const float t = sweepInfo->t; //wc: t = tilt angle of the sweep
  const float tan_t = tanf(t);

  const float r2 = x * x + y * y;
  const float r = arm_sqrt(r2);

  const float predictedSweepAngle = sweepInfo->calibrationMeasurementModel(x, y, z, t, sweepInfo->calib);
  const float measuredSweepAngle = sweepInfo->measuredSweepAngle;
  const float error = measuredSweepAngle - predictedSweepAngle;

  if (outlierFilterLighthouseValidateSweep(sweepOutlierFilterState, r, error, nowMs)) {
    //wc: edits
    point_t cfPosP; //wc: added for logging
    estimatorKalmanGetEstimatedPos(&cfPosP);
    vec3d cfPos = {cfPosP.x, cfPosP.y, cfPosP.z}; //wc: added for logging
    // DEBUG_PRINT("cfPos5: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);
  

    // Calculate H vector (in the rotor reference frame)
    const float z_tan_t = z * tan_t;
    const float qNum = r2 - z_tan_t * z_tan_t;
    // Avoid singularity
    if (qNum > 0.0001f) {
      const float q = tan_t / arm_sqrt(qNum);
      vec3d gr = {(-y - x * z * q) / r2, (x - y * z * q) / r2 , q};

      // gr is in the rotor reference frame, rotate back to the global
      // reference frame using the rotor rotation matrix
      vec3d g;
      arm_matrix_instance_f32 gr_ = {3, 1, gr};
      arm_matrix_instance_f32 Rr_ = {3, 3, (float32_t *)(*sweepInfo->rotorRot)};
      arm_matrix_instance_f32 g_ = {3, 1, g}; 
      mat_mult(&Rr_, &gr_, &g_);
      //wc: edit for logging
      // float32_t* g_data = g_.pData;
      // DEBUG_PRINT("g_: %f, %f, %f\n", (double)g_data[0], (double)g_data[1], (double)g_data[2]); //wc:edit
      // estimatorKalmanGetEstimatedPos(&cfPosP);
      // DEBUG_PRINT("cfPos6: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);


      float h[KC_STATE_DIM] = {0};
      h[KC_STATE_X] = g[0];
      h[KC_STATE_Y] = g[1];
      h[KC_STATE_Z] = g[2];

      //wc: edit for logging
      estimatorKalmanGetEstimatedPos(&cfPosP);
      DEBUG_PRINT("cfPos7: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);

      arm_matrix_instance_f32 H = {1, KC_STATE_DIM, h};
      kalmanCoreScalarUpdate(this, &H, error, sweepInfo->stdDev);
      estimatorKalmanGetEstimatedPos(&cfPosP);
      DEBUG_PRINT("cfPos8: %f, %f, %f\n", (double)cfPos[0], (double)cfPos[1], (double)cfPos[2]);
    }
  }
}
