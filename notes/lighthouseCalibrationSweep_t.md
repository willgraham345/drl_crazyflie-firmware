```c
typedef struct {

  float phase;

  float tilt;

  float curve;

  float gibmag;

  float gibphase;

  // Lh2 extra params

  float ogeemag;

  float ogeephase;

} __attribute__((packed)) lighthouseCalibrationSweep_t;
```