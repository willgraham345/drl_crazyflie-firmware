Members:
* pulseProcessorV2_t
* ootxDecoder
* bsCalibration 
* bsGeometry 
* bsGeoCache 
* baseStationGeoValidMap 
* baseStationCalibValidMap 

```c
typedef struct pulseProcessor_s { //wc: this is the only time the pulseProcessor_s is in this firmware, but I have no idea why. No headers, nothing.

  bool receivedBsSweep[CONFIG_DECK_LIGHTHOUSE_MAX_N_BS];

  

  union {

    struct {

      pulseProcessorV1_t v1;

    };

  

    struct {

      pulseProcessorV2_t v2;

    };

  };

  

  ootxDecoderState_t ootxDecoder[CONFIG_DECK_LIGHTHOUSE_MAX_N_BS];

  lighthouseCalibration_t bsCalibration[CONFIG_DECK_LIGHTHOUSE_MAX_N_BS];

  baseStationGeometry_t bsGeometry[CONFIG_DECK_LIGHTHOUSE_MAX_N_BS];

  baseStationGeometryCache_t bsGeoCache[CONFIG_DECK_LIGHTHOUSE_MAX_N_BS]; //wc: holds baseStationInvertedRotationMatrixes, and lh1Rotor2RotationMatrixes, and lh1Rotor2InvertedRotationMatrixes

  

  // Health check data

  uint32_t healthFirstSensorTs;

  uint8_t healthSensorBitField;

  bool healthDetermined;

  

  // A bitmap indicating which base stations that has valid geo data

  uint16_t baseStationGeoValidMap;

  // A bitmap indicating which base stations that have valid calibration data

  uint16_t baseStationCalibValidMap;

} pulseProcessor_t;
```

