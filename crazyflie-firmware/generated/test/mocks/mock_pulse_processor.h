/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_PULSE_PROCESSOR_H
#define _MOCK_PULSE_PROCESSOR_H

#include "pulse_processor.h"

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

void mock_pulse_processor_Init(void);
void mock_pulse_processor_Destroy(void);
void mock_pulse_processor_Verify(void);




#define pulseProcessorApplyCalibration_IgnoreAndReturn(cmock_retval) pulseProcessorApplyCalibration_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorApplyCalibration_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define pulseProcessorApplyCalibration_ExpectAndReturn(state, angles, baseStation, cmock_retval) pulseProcessorApplyCalibration_CMockExpectAndReturn(__LINE__, state, angles, baseStation, cmock_retval)
void pulseProcessorApplyCalibration_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, pulseProcessorResult_t* angles, int baseStation, bool cmock_to_return);
typedef bool (* CMOCK_pulseProcessorApplyCalibration_CALLBACK)(pulseProcessor_t* state, pulseProcessorResult_t* angles, int baseStation, int cmock_num_calls);
void pulseProcessorApplyCalibration_StubWithCallback(CMOCK_pulseProcessorApplyCalibration_CALLBACK Callback);
#define pulseProcessorApplyCalibration_ExpectWithArrayAndReturn(state, state_Depth, angles, angles_Depth, baseStation, cmock_retval) pulseProcessorApplyCalibration_CMockExpectWithArrayAndReturn(__LINE__, state, state_Depth, angles, angles_Depth, baseStation, cmock_retval)
void pulseProcessorApplyCalibration_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* state, int state_Depth, pulseProcessorResult_t* angles, int angles_Depth, int baseStation, bool cmock_to_return);
#define pulseProcessorApplyCalibration_IgnoreArg_state() pulseProcessorApplyCalibration_CMockIgnoreArg_state(__LINE__)
void pulseProcessorApplyCalibration_CMockIgnoreArg_state(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorApplyCalibration_IgnoreArg_angles() pulseProcessorApplyCalibration_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorApplyCalibration_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorApplyCalibration_IgnoreArg_baseStation() pulseProcessorApplyCalibration_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorApplyCalibration_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorClearOutdated_Ignore() pulseProcessorClearOutdated_CMockIgnore()
void pulseProcessorClearOutdated_CMockIgnore(void);
#define pulseProcessorClearOutdated_Expect(appState, angles, baseStation) pulseProcessorClearOutdated_CMockExpect(__LINE__, appState, angles, baseStation)
void pulseProcessorClearOutdated_CMockExpect(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* appState, pulseProcessorResult_t* angles, int baseStation);
typedef void (* CMOCK_pulseProcessorClearOutdated_CALLBACK)(pulseProcessor_t* appState, pulseProcessorResult_t* angles, int baseStation, int cmock_num_calls);
void pulseProcessorClearOutdated_StubWithCallback(CMOCK_pulseProcessorClearOutdated_CALLBACK Callback);
#define pulseProcessorClearOutdated_ExpectWithArray(appState, appState_Depth, angles, angles_Depth, baseStation) pulseProcessorClearOutdated_CMockExpectWithArray(__LINE__, appState, appState_Depth, angles, angles_Depth, baseStation)
void pulseProcessorClearOutdated_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, pulseProcessor_t* appState, int appState_Depth, pulseProcessorResult_t* angles, int angles_Depth, int baseStation);
#define pulseProcessorClearOutdated_IgnoreArg_appState() pulseProcessorClearOutdated_CMockIgnoreArg_appState(__LINE__)
void pulseProcessorClearOutdated_CMockIgnoreArg_appState(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorClearOutdated_IgnoreArg_angles() pulseProcessorClearOutdated_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorClearOutdated_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorClearOutdated_IgnoreArg_baseStation() pulseProcessorClearOutdated_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorClearOutdated_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorProcessed_Ignore() pulseProcessorProcessed_CMockIgnore()
void pulseProcessorProcessed_CMockIgnore(void);
#define pulseProcessorProcessed_Expect(angles, baseStation) pulseProcessorProcessed_CMockExpect(__LINE__, angles, baseStation)
void pulseProcessorProcessed_CMockExpect(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int baseStation);
typedef void (* CMOCK_pulseProcessorProcessed_CALLBACK)(pulseProcessorResult_t* angles, int baseStation, int cmock_num_calls);
void pulseProcessorProcessed_StubWithCallback(CMOCK_pulseProcessorProcessed_CALLBACK Callback);
#define pulseProcessorProcessed_ExpectWithArray(angles, angles_Depth, baseStation) pulseProcessorProcessed_CMockExpectWithArray(__LINE__, angles, angles_Depth, baseStation)
void pulseProcessorProcessed_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int angles_Depth, int baseStation);
#define pulseProcessorProcessed_IgnoreArg_angles() pulseProcessorProcessed_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorProcessed_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorProcessed_IgnoreArg_baseStation() pulseProcessorProcessed_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorProcessed_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorClear_Ignore() pulseProcessorClear_CMockIgnore()
void pulseProcessorClear_CMockIgnore(void);
#define pulseProcessorClear_Expect(angles, baseStation) pulseProcessorClear_CMockExpect(__LINE__, angles, baseStation)
void pulseProcessorClear_CMockExpect(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int baseStation);
typedef void (* CMOCK_pulseProcessorClear_CALLBACK)(pulseProcessorResult_t* angles, int baseStation, int cmock_num_calls);
void pulseProcessorClear_StubWithCallback(CMOCK_pulseProcessorClear_CALLBACK Callback);
#define pulseProcessorClear_ExpectWithArray(angles, angles_Depth, baseStation) pulseProcessorClear_CMockExpectWithArray(__LINE__, angles, angles_Depth, baseStation)
void pulseProcessorClear_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int angles_Depth, int baseStation);
#define pulseProcessorClear_IgnoreArg_angles() pulseProcessorClear_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorClear_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorClear_IgnoreArg_baseStation() pulseProcessorClear_CMockIgnoreArg_baseStation(__LINE__)
void pulseProcessorClear_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorAllClear_Ignore() pulseProcessorAllClear_CMockIgnore()
void pulseProcessorAllClear_CMockIgnore(void);
#define pulseProcessorAllClear_Expect(angles) pulseProcessorAllClear_CMockExpect(__LINE__, angles)
void pulseProcessorAllClear_CMockExpect(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles);
typedef void (* CMOCK_pulseProcessorAllClear_CALLBACK)(pulseProcessorResult_t* angles, int cmock_num_calls);
void pulseProcessorAllClear_StubWithCallback(CMOCK_pulseProcessorAllClear_CALLBACK Callback);
#define pulseProcessorAllClear_ExpectWithArray(angles, angles_Depth) pulseProcessorAllClear_CMockExpectWithArray(__LINE__, angles, angles_Depth)
void pulseProcessorAllClear_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, pulseProcessorResult_t* angles, int angles_Depth);
#define pulseProcessorAllClear_IgnoreArg_angles() pulseProcessorAllClear_CMockIgnoreArg_angles(__LINE__)
void pulseProcessorAllClear_CMockIgnoreArg_angles(UNITY_LINE_TYPE cmock_line);
#define pulseProcessorAnglesQuality_IgnoreAndReturn(cmock_retval) pulseProcessorAnglesQuality_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pulseProcessorAnglesQuality_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define pulseProcessorAnglesQuality_ExpectAndReturn(cmock_retval) pulseProcessorAnglesQuality_CMockExpectAndReturn(__LINE__, cmock_retval)
void pulseProcessorAnglesQuality_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_pulseProcessorAnglesQuality_CALLBACK)(int cmock_num_calls);
void pulseProcessorAnglesQuality_StubWithCallback(CMOCK_pulseProcessorAnglesQuality_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif