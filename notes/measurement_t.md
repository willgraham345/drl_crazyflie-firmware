```c
typedef struct

{

  MeasurementType type;

  union

  {

    tdoaMeasurement_t tdoa;

    positionMeasurement_t position;

    poseMeasurement_t pose;

    distanceMeasurement_t distance;

    tofMeasurement_t tof;

    heightMeasurement_t height;

    flowMeasurement_t flow;

    yawErrorMeasurement_t yawError;

    sweepAngleMeasurement_t sweepAngle;

    gyroscopeMeasurement_t gyroscope;

    accelerationMeasurement_t acceleration;

    barometerMeasurement_t barometer;

  } data;

} measurement_t;
```