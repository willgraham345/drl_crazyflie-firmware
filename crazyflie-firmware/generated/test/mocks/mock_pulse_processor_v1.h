/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_PULSE_PROCESSOR_V1_H
#define _MOCK_PULSE_PROCESSOR_V1_H

#include "pulse_processor_v1.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_pulse_processor_v1_Init(void);
void mock_pulse_processor_v1_Destroy(void);
void mock_pulse_processor_v1_Verify(void);




#define pulseProcessorV1ProcessPulse_IgnoreAndReturn(cmock_retval) pulseProcessorV1ProcessPulse_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorV1ProcessPulse_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define pulseProcessorV1ProcessPulse_ExpectAndReturn(state, frameData, angles, baseStation, axis, calibDataIsDecoded, cmock_retval) pulseProcessorV1ProcessPulse_CMockExpectAndReturn(__LINE__, state, frameData, angles, baseStation, axis, calibDataIsDecoded, cmock_retval)
void pulseProcessorV1ProcessPulse_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, const pulseProcessorFrame_t* frameData, pulseProcessorResult_t* angles, int* baseStation, int* axis, bool* calibDataIsDecoded, bool cmock_to_return);
typedef bool (* CMOCK_pulseProcessorV1ProcessPulse_CALLBACK)(pulseProcessor_t* state, const pulseProcessorFrame_t* frameData, pulseProcessorResult_t* angles, int* baseStation, int* axis, bool* calibDataIsDecoded, int cmock_num_calls);
void pulseProcessorV1ProcessPulse_StubWithCallback(CMOCK_pulseProcessorV1ProcessPulse_CALLBACK Callback);
#define pulseProcessorV1ProcessPulse_ExpectWithArrayAndReturn(state, state_Depth, frameData, frameData_Depth, angles, angles_Depth, baseStation, baseStation_Depth, axis, axis_Depth, calibDataIsDecoded, calibDataIsDecoded_Depth, cmock_retval) pulseProcessorV1ProcessPulse_CMockExpectWithArrayAndReturn(__LINE__, state, state_Depth, frameData, frameData_Depth, angles, angles_Depth, baseStation, baseStation_Depth, axis, axis_Depth, calibDataIsDecoded, calibDataIsDecoded_Depth, cmock_retval)
void pulseProcessorV1ProcessPulse_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, int state_Depth, const pulseProcessorFrame_t* frameData, int frameData_Depth, pulseProcessorResult_t* angles, int angles_Depth, int* baseStation, int baseStation_Depth, int* axis, int axis_Depth, bool* calibDataIsDecoded, int calibDataIsDecoded_Depth, bool cmock_to_return);
#define pulseProcessorV1ProcessPulse_IgnoreArg_state() pulseProcessorV1ProcessPulse_CMockIgnoreArg_state(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_state(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessPulse_IgnoreArg_frameData() pulseProcessorV1ProcessPulse_CMockIgnoreArg_frameData(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_frameData(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessPulse_IgnoreArg_angles() pulseProcessorV1ProcessPulse_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessPulse_IgnoreArg_baseStation() pulseProcessorV1ProcessPulse_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessPulse_IgnoreArg_axis() pulseProcessorV1ProcessPulse_CMockIgnoreArg_axis(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_axis(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessPulse_IgnoreArg_calibDataIsDecoded() pulseProcessorV1ProcessPulse_CMockIgnoreArg_calibDataIsDecoded(__LINE__)
void pulseProcessorV1ProcessPulse_CMockIgnoreArg_calibDataIsDecoded(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessValidAngles_Ignore() pulseProcessorV1ProcessValidAngles_CMockIgnore()
void pulseProcessorV1ProcessValidAngles_CMockIgnore(void);
#define pulseProcessorV1ProcessValidAngles_Expect(angles, baseStation) pulseProcessorV1ProcessValidAngles_CMockExpect(__LINE__, angles, baseStation)
void pulseProcessorV1ProcessValidAngles_CMockExpect(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int baseStation);
typedef void (* CMOCK_pulseProcessorV1ProcessValidAngles_CALLBACK)(pulseProcessorResult_t* angles, int baseStation, int cmock_num_calls);
void pulseProcessorV1ProcessValidAngles_StubWithCallback(CMOCK_pulseProcessorV1ProcessValidAngles_CALLBACK Callback);
#define pulseProcessorV1ProcessValidAngles_ExpectWithArray(angles, angles_Depth, baseStation) pulseProcessorV1ProcessValidAngles_CMockExpectWithArray(__LINE__, angles, angles_Depth, baseStation)
void pulseProcessorV1ProcessValidAngles_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int angles_Depth, int baseStation);
#define pulseProcessorV1ProcessValidAngles_IgnoreArg_angles() pulseProcessorV1ProcessValidAngles_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorV1ProcessValidAngles_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1ProcessValidAngles_IgnoreArg_baseStation() pulseProcessorV1ProcessValidAngles_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorV1ProcessValidAngles_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV1AnglesQuality_IgnoreAndReturn(cmock_retval) pulseProcessorV1AnglesQuality_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorV1AnglesQuality_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define pulseProcessorV1AnglesQuality_ExpectAndReturn(cmock_retval) pulseProcessorV1AnglesQuality_CMockExpectAndReturn(__LINE__, cmock_retval)
void pulseProcessorV1AnglesQuality_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_pulseProcessorV1AnglesQuality_CALLBACK)(int cmock_num_calls);
void pulseProcessorV1AnglesQuality_StubWithCallback(CMOCK_pulseProcessorV1AnglesQuality_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif