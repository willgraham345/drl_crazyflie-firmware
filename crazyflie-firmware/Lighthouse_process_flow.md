# Lighthouse Process Flow

**lighthouseCoreTask**()
- calls -> **lighthouseTransmitProcessFrame**(frame)
    - I think this only calls timing stuff
- calls -> **lighthouseUpdateSystemType**()
    - calls -> **pulseProcessorV2ProcessPulse**() using function pointer **pulseProcessorProcessPulse**, to determine if it should call processFrame below. 
        - interface which writes angle, base station, and axis. 
        - calls -> **handleCalibrationData**(state, frameData)
        - calls -> **handleAngles**(state, frameData, angles, basestation, axis)
            - calls -> **processFrame**(), notbut the testable static kind (second function) 
            - Check if block is larger than a given delta
            - calls -> **calculateAngles(latestBlock, previousBlock, angles)
                - blocks are pulseProcessorV2SweepBlock_t, addresed to state blocks 
- calls -> **processFrame**(&lighthouseCoreState, &angles, &frame, now_ms)
    - calls -> **pulseProcessorProcessPulse**(appState, frame, angles, basestation, sweepId(first or second sweep), calibDataIsDecoded)
        - calls -> handleCalibrationData(state, frameData)
        
    - calls -> **usePulseResult**(appstate, angles, basestation, sweepId, now_ms)
        - calls -> **pulseProcessorApplyCalibration**(appState, angles, baseStation)
            - checks if calibrationData is valid (`calibrationData = &state->bsCalibration[baseStation]`)
                - if false, calls -> **lighthoueCalibrationApplyV2()**
                    - calls **lighthouseCalibrationApply**(calib, rawAngles, correctedAngles, idealtoDistortedV2)
                    - Pretty sure all this does is clean up some stuff, and make sure data isn't too noisy
        - calls -> **locSrvSendLighthouseAngle**(baseStation, angles);
            - creates and initializes angle packet, and then handles sending it somewhere?

        - calls -> **convertV2AnglestoV1Angles** angles(angles)
            - More notes below
        - calls -> **usePulseResultsSweeps**(appState, angles, baseStation)
            - calls -> **lighthousePositionEstimatePoseSweeps**(appState, angles, baseStation)
                - calls -> **estimatePositionSweeps**(state, angles, baseStation)
                - calls -> **estimateYaw**(state, angles, baseStation)
    - calls -> **useCalibrationData**(appState)


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


## pulseProcessorV2ConvertToV1Angles(const float v2Angle1, const float v2Angle2, float* v1Angles) 

```c
void pulseProcessorV2ConvertToV1Angles(const float v2Angle1, const float v2Angle2, float* v1Angles) {
    const float tant = 0.5773502691896258f;   // tan(pi / 6)

    v1Angles[0] = (v2Angle1 + v2Angle2) / 2.0f;
    v1Angles[1] = atan2f(sinf(v2Angle2 - v2Angle1), (tant * (cosf(v2Angle1) + cosf(v2Angle2))));
}
```