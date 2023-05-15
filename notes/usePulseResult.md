
- calls -> **[[pulseProcessorApplyCalibration]]**(appState, angles, baseStation)

- calls -> **[[locSrvSendLighthouseAngle]]**(baseStation, angles);

- calls -> **[[convertV2AnglestoV1Angles]]** angles(angles)

- calls -> **[[usePulseResultsSweeps]]**(appState, angles, baseStation)
- calls -->