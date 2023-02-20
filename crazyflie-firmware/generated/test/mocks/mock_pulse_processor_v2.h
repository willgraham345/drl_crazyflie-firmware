/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_PULSE_PROCESSOR_V2_H
#define _MOCK_PULSE_PROCESSOR_V2_H

#include "pulse_processor_v2.h"

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

void mock_pulse_processor_v2_Init(void);
void mock_pulse_processor_v2_Destroy(void);
void mock_pulse_processor_v2_Verify(void);




#define pulseProcessorV2ProcessPulse_IgnoreAndReturn(cmock_retval) pulseProcessorV2ProcessPulse_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorV2ProcessPulse_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define pulseProcessorV2ProcessPulse_ExpectAndReturn(state, frameData, angles, baseStation, axis, calibDataIsDecoded, cmock_retval) pulseProcessorV2ProcessPulse_CMockExpectAndReturn(__LINE__, state, frameData, angles, baseStation, axis, calibDataIsDecoded, cmock_retval)
void pulseProcessorV2ProcessPulse_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, const pulseProcessorFrame_t* frameData, pulseProcessorResult_t* angles, int* baseStation, int* axis, bool* calibDataIsDecoded, bool cmock_to_return);
typedef bool (* CMOCK_pulseProcessorV2ProcessPulse_CALLBACK)(pulseProcessor_t* state, const pulseProcessorFrame_t* frameData, pulseProcessorResult_t* angles, int* baseStation, int* axis, bool* calibDataIsDecoded, int cmock_num_calls);
void pulseProcessorV2ProcessPulse_StubWithCallback(CMOCK_pulseProcessorV2ProcessPulse_CALLBACK Callback);
#define pulseProcessorV2ProcessPulse_ExpectWithArrayAndReturn(state, state_Depth, frameData, frameData_Depth, angles, angles_Depth, baseStation, baseStation_Depth, axis, axis_Depth, calibDataIsDecoded, calibDataIsDecoded_Depth, cmock_retval) pulseProcessorV2ProcessPulse_CMockExpectWithArrayAndReturn(__LINE__, state, state_Depth, frameData, frameData_Depth, angles, angles_Depth, baseStation, baseStation_Depth, axis, axis_Depth, calibDataIsDecoded, calibDataIsDecoded_Depth, cmock_retval)
void pulseProcessorV2ProcessPulse_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, int state_Depth, const pulseProcessorFrame_t* frameData, int frameData_Depth, pulseProcessorResult_t* angles, int angles_Depth, int* baseStation, int baseStation_Depth, int* axis, int axis_Depth, bool* calibDataIsDecoded, int calibDataIsDecoded_Depth, bool cmock_to_return);
#define pulseProcessorV2ProcessPulse_IgnoreArg_state() pulseProcessorV2ProcessPulse_CMockIgnoreArg_state(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_state(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ProcessPulse_IgnoreArg_frameData() pulseProcessorV2ProcessPulse_CMockIgnoreArg_frameData(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_frameData(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ProcessPulse_IgnoreArg_angles() pulseProcessorV2ProcessPulse_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ProcessPulse_IgnoreArg_baseStation() pulseProcessorV2ProcessPulse_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ProcessPulse_IgnoreArg_axis() pulseProcessorV2ProcessPulse_CMockIgnoreArg_axis(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_axis(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ProcessPulse_IgnoreArg_calibDataIsDecoded() pulseProcessorV2ProcessPulse_CMockIgnoreArg_calibDataIsDecoded(__LINE__)
void pulseProcessorV2ProcessPulse_CMockIgnoreArg_calibDataIsDecoded(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ConvertToV1Angles_Ignore() pulseProcessorV2ConvertToV1Angles_CMockIgnore()
void pulseProcessorV2ConvertToV1Angles_CMockIgnore(void);
#define pulseProcessorV2ConvertToV1Angles_Expect(v2Angle1, v2Angle2, v1Angles) pulseProcessorV2ConvertToV1Angles_CMockExpect(__LINE__, v2Angle1, v2Angle2, v1Angles)
void pulseProcessorV2ConvertToV1Angles_CMockExpect(UNITY_LINE_TYPE cmock_line, const float v2Angle1, const float v2Angle2, float* v1Angles);
typedef void (* CMOCK_pulseProcessorV2ConvertToV1Angles_CALLBACK)(const float v2Angle1, const float v2Angle2, float* v1Angles, int cmock_num_calls);
void pulseProcessorV2ConvertToV1Angles_StubWithCallback(CMOCK_pulseProcessorV2ConvertToV1Angles_CALLBACK Callback);
#define pulseProcessorV2ConvertToV1Angles_ExpectWithArray(v2Angle1, v2Angle2, v1Angles, v1Angles_Depth) pulseProcessorV2ConvertToV1Angles_CMockExpectWithArray(__LINE__, v2Angle1, v2Angle2, v1Angles, v1Angles_Depth)
void pulseProcessorV2ConvertToV1Angles_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, const float v2Angle1, const float v2Angle2, float* v1Angles, int v1Angles_Depth);
#define pulseProcessorV2ConvertToV1Angles_IgnoreArg_v2Angle1() pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v2Angle1(__LINE__)
void pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v2Angle1(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ConvertToV1Angles_IgnoreArg_v2Angle2() pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v2Angle2(__LINE__)
void pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v2Angle2(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2ConvertToV1Angles_IgnoreArg_v1Angles() pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v1Angles(__LINE__)
void pulseProcessorV2ConvertToV1Angles_CMockIgnoreArg_v1Angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorV2AnglesQuality_IgnoreAndReturn(cmock_retval) pulseProcessorV2AnglesQuality_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorV2AnglesQuality_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define pulseProcessorV2AnglesQuality_ExpectAndReturn(cmock_retval) pulseProcessorV2AnglesQuality_CMockExpectAndReturn(__LINE__, cmock_retval)
void pulseProcessorV2AnglesQuality_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_pulseProcessorV2AnglesQuality_CALLBACK)(int cmock_num_calls);
void pulseProcessorV2AnglesQuality_StubWithCallback(CMOCK_pulseProcessorV2AnglesQuality_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
