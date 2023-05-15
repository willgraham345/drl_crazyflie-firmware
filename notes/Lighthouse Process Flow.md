 

  

**[[lighthouseCoreTask]]**()



  
  

## calculateAngles()

```c

static void calculateAngles(const pulseProcessorV2SweepBlock_t* latestBlock, const pulseProcessorV2SweepBlock_t* previousBlock, pulseProcessorResult_t* angles) {

    const uint8_t channel = latestBlock->channel;

  

    for (int i = 0; i < PULSE_PROCESSOR_N_SENSORS; i++) {

        uint32_t firstOffset = previousBlock->offset[i];

        uint32_t secondOffset = latestBlock->offset[i];

        uint32_t period = CYCLE_PERIODS[channel];

  

        float firstBeam = (firstOffset * 2 * M_PI_F / period) - M_PI_F + M_PI_F / 3.0f;

        float secondBeam = (secondOffset * 2 * M_PI_F / period) - M_PI_F - M_PI_F / 3.0f;

  

        pulseProcessorSensorMeasurement_t* measurement = &angles->baseStationMeasurementsLh2[channel].sensorMeasurements[i];

        measurement->angles[0] = firstBeam;

        measurement->angles[1] = secondBeam;

        measurement->validCount = 2;

    }

    angles->lastUsecTimestamp[channel] = usecTimestamp();

}

```

  

## processFrame functions

```c

    static void processFrame(pulseProcessor_t *appState, pulseProcessorResult_t* angles, const lighthouseUartFrame_t* frame, const uint32_t now_ms) {

        int baseStation;

        int sweepId;

        bool calibDataIsDecoded = false;

  

        pulseWidth[frame->data.sensor] = frame->data.width;

  

        if (pulseProcessorProcessPulse(appState, &frame->data, angles, &baseStation, &sweepId, &calibDataIsDecoded)) {

            STATS_CNT_RATE_EVENT_DEBUG(bsRates[baseStation]);

            usePulseResult(appState, angles, baseStation, sweepId, now_ms);

        }

  

        if (calibDataIsDecoded) {

        useCalibrationData(appState);

        }

```

  
  

```c

    TESTABLE_STATIC bool processFrame(const pulseProcessorFrame_t* frameData, pulseProcessorV2PulseWorkspace_t* pulseWorkspace, pulseProcessorV2BlockWorkspace_t* blockWorkspace) {

        int nrOfBlocks = 0;

  

        // Sensor timestamps may arrive in the wrong order, we need an abs() when checking the diff

        const bool isFirstFrameInNewWorkspace = TS_ABS_DIFF_LARGER_THAN(frameData->timestamp, pulseWorkspace->latestTimestamp, MAX_TICKS_SENSOR_TO_SENSOR);

        if (isFirstFrameInNewWorkspace) {

            nrOfBlocks = processWorkspace(pulseWorkspace, blockWorkspace);

            clearWorkspace(pulseWorkspace);

        }

  

        pulseWorkspace->latestTimestamp = frameData->timestamp;

  

        if (! storePulse(frameData, pulseWorkspace)) {

            clearWorkspace(pulseWorkspace);

        }

  

        return nrOfBlocks;

}

```

