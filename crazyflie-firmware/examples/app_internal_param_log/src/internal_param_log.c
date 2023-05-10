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
  // logVarId_t idYaw = logGetVarId("lighthouse", "yaw");
  // float yaw = 0.0f;

  // paramVarId_t idEstimator = paramGetVarId("stabilizer", "estimator");
  // uint8_t estimator_type = 0;
  // paramVarId_t id_lighthousemethod = paramGetVarId("lighthouse", "method");
  // uint8_t method = 2; (we're using Sweep in EKF)

  // logVarId_t id_posRT = logGetVarId("lighthouse", "posRt")
  // float posRt = 0.0f;
  // logVarId_t id_rawAngle0ylh2 = logGetVarId("lighthouse", "rawAngle0ylh2");
  // float rawAngle = 0.0f;

  // logVarId_t id_lighthouseX = logGetVarId("lighthouse", "x");
  // float x = 0.0f;

  //we can use lighthouse 1 conventions for now, because it's easier to read
  logVarId_t id_angle0x = logGetVarId("lighthouse", "angle0x");
  float angle0x = 0.0f;
  logVarId_t id_angle0y = logGetVarId("lighthouse", "angle0y");
  float angle0y = 0.0f;
  logVarId_t id_angle1x = logGetVarId("lighthouse", "angle1x");
  float angle1x = 0.0f;
  logVarId_t id_angle1y = logGetVarId("lighthouse", "angle1y");
  float angle1y = 0.0f;

  while(1) {
    vTaskDelay(M2T(2000));
    // Will's edits
    // Get the logging data
    angle0x = logGetFloat(id_angle0x);
    DEBUG_PRINT("angle0x is now: %f rad\n", (double)angle0x);
    angle0y = logGetFloat(id_angle0y);
    DEBUG_PRINT("angle0y is now: %f rad\n", (double)angle0y);
    angle1x = logGetFloat(id_angle1x);
    DEBUG_PRINT("angle1x is now: %f rad\n", (double)angle1x);
    angle1y = logGetFloat(id_angle1y);
    DEBUG_PRINT("angle1y is now: %f rad\n", (double)angle1y);
    

    // Get the logging data
    // yaw = logGetFloat(idYaw);
    // DEBUG_PRINT("Yaw is now: %f deg\n", (double)yaw);
    // Get parameter value
    // estimator_type = paramGetInt(idEstimator);
    // DEBUG_PRINT("Estimator type is now: %d deg\n", estimator_type);


    // Set a parameter value 
    //  Note, this will influence the flight quality if you change estimator
    // uint8_t new_value = 2;
    // paramSetInt(idEstimator, new_value);
    
  }
}