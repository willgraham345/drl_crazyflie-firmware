/**
 * ,---------,       ____  _ __
 * |  ,-^-,  |      / __ )(_) /_______________ _____  ___
 * | (  O  ) |     / __  / / __/ ___/ ___/ __ `/_  / / _ \
 * | / ,--´  |    / /_/ / / /_/ /__/ /  / /_/ / / /_/  __/
 *    +------`   /_____/_/\__/\___/_/   \__,_/ /___/\___/
 *
 * Crazyflie control firmware
 *
 * Copyright (C) 2019 Bitcraze AB
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
 *
 * internal_log_param_api.c - App layer application of the internal log
 *  and param api  
 */


#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#include "app.h"

#include "FreeRTOS.h"
#include "task.h"

#include "debug.h"

#include "log.h"
#include "param.h"

#define DEBUG_MODULE "LH"

void appMain()
{
  DEBUG_PRINT("This is the App layer example of the internal log param api...\n");

  //Lighthouse angles
  logVarId_t id_rawAngle0xlh2 = logGetVarId("lightHouse", "rawAngle0xlh2");
  float rawAngle0xlh2 = 0.0f;
  logVarId_t id_rawAngle0ylh2 = logGetVarId("lightHouse", "rawAngle0ylh2");
  float rawAngle0ylh2 = 0.0f;
  logVarId_t id_rawAngle1xlh2 = logGetVarId("lightHouse", "rawAngle1xlh2");
  float rawAngle1xlh2 = 0.0f;
  logVarId_t id_rawAngle1ylh2 = logGetVarId("lightHouse", "rawAngle1ylh2");
  float rawAngle1ylh2 = 0.0f;

  // Lighthouse estimations
  logVarId_t id_x = logGetVarId("lightHouse", "x");
  float x = 0.0f;
  logVarId_t id_y = logGetVarId("lightHouse", "y");
  float y = 0.0f;
  logVarId_t id_z = logGetVarId("lightHouse", "z");
  float z = 0.0f;


  // Kalman Values
  // logVarId_t id_stateZ = logGetVarId("kalman", "stateZ");
  // float stateZ = 0.0f;
  // logVarId_t id_q0 = logGetVarId("kalman", "q0");
  // float q0 = 0.0f;
  // logVarId_t id_q1 = logGetVarId("kalman", "q1");
  // float q1 = 0.0f;
  // logVarId_t id_q2 = logGetVarId("kalman", "q2");
  // float q2 = 0.0f;
  // logVarId_t id_q3 = logGetVarId("kalman", "q3");
  // float q3 = 0.0f;
  



  while(1) {
    vTaskDelay(M2T(2000));
    // Will's edits
    // Get the logging data

    //Lighthouse data
    rawAngle0xlh2 = logGetFloat(id_rawAngle0xlh2);
    DEBUG_PRINT("rawAngle0xlh2 is now: %f \n", (double)rawAngle0xlh2);
    rawAngle0ylh2 = logGetFloat(id_rawAngle0ylh2);
    DEBUG_PRINT("rawAngle0ylh2 is now: %f \n", (double)rawAngle0ylh2);
    rawAngle1xlh2 = logGetFloat(id_rawAngle1xlh2);
    DEBUG_PRINT("rawAngle1xlh2 is now: %f \n", (double)rawAngle1xlh2);
    rawAngle1ylh2 = logGetFloat(id_rawAngle1ylh2);
    DEBUG_PRINT("rawAngle1ylh2 is now: %f \n", (double)rawAngle1ylh2);

    // Lighthouse data
    x = logGetFloat(id_x);
    DEBUG_PRINT("x is now: %f m\n", (double)x);
    y = logGetFloat(id_y);
    DEBUG_PRINT("y is now: %f m\n", (double)y);
    z = logGetFloat(id_z);
    DEBUG_PRINT("z is now: %f m\n", (double)z);
    

    // Kalman data
    // stateZ = logGetFloat(id_stateZ);
    // DEBUG_PRINT("stateZ is now: %f m\n", (double)stateZ);
    // q0 = logGetFloat(id_q0);
    // DEBUG_PRINT("q0 is now: %f \n", (double)q0);
    // q1 = logGetFloat(id_q1);
    // DEBUG_PRINT("q1 is now: %f \n", (double)q1);
    // q2 = logGetFloat(id_q2);
    // DEBUG_PRINT("q2 is now: %f \n", (double)q2);
    // q3 = logGetFloat(id_q3);
    // DEBUG_PRINT("q3 is now: %f \n", (double)q3);

    


    // Set a parameter value 
    //  Note, this will influence the flight quality if you change estimator
    // uint8_t new_value = 2;
    // paramSetInt(idEstimator, new_value);
    
  }
}