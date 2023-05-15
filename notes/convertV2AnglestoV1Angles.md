```c

void pulseProcessorV2ConvertToV1Angles(const float v2Angle1, const float v2Angle2, float* v1Angles) {

    const float tant = 0.5773502691896258f;   // tan(pi / 6)

  

    v1Angles[0] = (v2Angle1 + v2Angle2) / 2.0f;

    v1Angles[1] = atan2f(sinf(v2Angle2 - v2Angle1), (tant * (cosf(v2Angle1) + cosf(v2Angle2))));

}

```