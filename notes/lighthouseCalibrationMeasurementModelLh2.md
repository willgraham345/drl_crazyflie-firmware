Right from kalman measurement model: https://www.bitcraze.io/documentation/repository/crazyflie-firmware/master/functional-areas/lighthouse/kalman_measurement_model/
$$\alpha_t = \sin^{-1}(-\dfrac{z\tan(t)}{\sqrt{x^2+ y^2}})$$
$$ = -\sin^{-1}(\dfrac{z\tan(t)}{\sqrt{x^2+ y^2}})$$
Based on this equation, I think think `base` =  $\alpha_t$, which means that $\alpha_s$ = `ax`
- That makes sense, as $\alpha_s$ is a rotation about th e  x axis.
---


--- 
```c
float lighthouseCalibrationMeasurementModelLh2(const float x, const float y, const float z, const float t, const lighthouseCalibrationSweep_t* calib) {

  const float ax = atan2f(y, x);

  // const float ay = atan2f(z, x);

  const float r = arm_sqrt(x * x + y * y);

  

  const float base = ax + asinf(clip1(z * tanf(t - calib->tilt) / r));

  const float compGib = -calib->gibmag * arm_cos_f32(ax + calib->gibphase);

  // TODO krri Figure out how to use curve and ogee calibration parameters

  

  return base - (calib->phase + compGib);

}
```

gibmag and gibphase are a parameters from lighthouseCalibrationSweep_t, passed in as `calib`