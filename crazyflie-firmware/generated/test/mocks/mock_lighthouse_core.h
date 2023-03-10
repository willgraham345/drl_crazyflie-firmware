/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LIGHTHOUSE_CORE_H
#define _MOCK_LIGHTHOUSE_CORE_H

#include "lighthouse_core.h"

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

void mock_lighthouse_core_Init(void);
void mock_lighthouse_core_Destroy(void);
void mock_lighthouse_core_Verify(void);




#define lighthouseCoreInit_Ignore() lighthouseCoreInit_CMockIgnore()
void lighthouseCoreInit_CMockIgnore(void);
#define lighthouseCoreInit_Expect() lighthouseCoreInit_CMockExpect(__LINE__)
void lighthouseCoreInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_lighthouseCoreInit_CALLBACK)(int cmock_num_calls);
void lighthouseCoreInit_StubWithCallback(CMOCK_lighthouseCoreInit_CALLBACK Callback);
#define lighthouseCoreTask_Ignore() lighthouseCoreTask_CMockIgnore()
void lighthouseCoreTask_CMockIgnore(void);
#define lighthouseCoreTask_Expect(param) lighthouseCoreTask_CMockExpect(__LINE__, param)
void lighthouseCoreTask_CMockExpect(UNITY_LINE_TYPE cmock_line, void* param);
typedef void (* CMOCK_lighthouseCoreTask_CALLBACK)(void* param, int cmock_num_calls);
void lighthouseCoreTask_StubWithCallback(CMOCK_lighthouseCoreTask_CALLBACK Callback);
#define lighthouseCoreTask_ExpectWithArray(param, param_Depth) lighthouseCoreTask_CMockExpectWithArray(__LINE__, param, param_Depth)
void lighthouseCoreTask_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, void* param, int param_Depth);
#define lighthouseCoreTask_IgnoreArg_param() lighthouseCoreTask_CMockIgnoreArg_param(__LINE__)
void lighthouseCoreTask_CMockIgnoreArg_param(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetCalibrationData_Ignore() lighthouseCoreSetCalibrationData_CMockIgnore()
void lighthouseCoreSetCalibrationData_CMockIgnore(void);
#define lighthouseCoreSetCalibrationData_Expect(baseStation, calibration) lighthouseCoreSetCalibrationData_CMockExpect(__LINE__, baseStation, calibration)
void lighthouseCoreSetCalibrationData_CMockExpect(UNITY_LINE_TYPE cmock_line, const uint8_t baseStation, const lighthouseCalibration_t* calibration);
typedef void (* CMOCK_lighthouseCoreSetCalibrationData_CALLBACK)(const uint8_t baseStation, const lighthouseCalibration_t* calibration, int cmock_num_calls);
void lighthouseCoreSetCalibrationData_StubWithCallback(CMOCK_lighthouseCoreSetCalibrationData_CALLBACK Callback);
#define lighthouseCoreSetCalibrationData_ExpectWithArray(baseStation, calibration, calibration_Depth) lighthouseCoreSetCalibrationData_CMockExpectWithArray(__LINE__, baseStation, calibration, calibration_Depth)
void lighthouseCoreSetCalibrationData_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, const uint8_t baseStation, const lighthouseCalibration_t* calibration, int calibration_Depth);
#define lighthouseCoreSetCalibrationData_IgnoreArg_baseStation() lighthouseCoreSetCalibrationData_CMockIgnoreArg_baseStation(__LINE__)
void lighthouseCoreSetCalibrationData_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetCalibrationData_IgnoreArg_calibration() lighthouseCoreSetCalibrationData_CMockIgnoreArg_calibration(__LINE__)
void lighthouseCoreSetCalibrationData_CMockIgnoreArg_calibration(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetSystemType_Ignore() lighthouseCoreSetSystemType_CMockIgnore()
void lighthouseCoreSetSystemType_CMockIgnore(void);
#define lighthouseCoreSetSystemType_Expect(type) lighthouseCoreSetSystemType_CMockExpect(__LINE__, type)
void lighthouseCoreSetSystemType_CMockExpect(UNITY_LINE_TYPE cmock_line, const lighthouseBaseStationType_t type);
typedef void (* CMOCK_lighthouseCoreSetSystemType_CALLBACK)(const lighthouseBaseStationType_t type, int cmock_num_calls);
void lighthouseCoreSetSystemType_StubWithCallback(CMOCK_lighthouseCoreSetSystemType_CALLBACK Callback);
#define lighthouseCoreSetSystemType_IgnoreArg_type() lighthouseCoreSetSystemType_CMockIgnoreArg_type(__LINE__)
void lighthouseCoreSetSystemType_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetLeds_Ignore() lighthouseCoreSetLeds_CMockIgnore()
void lighthouseCoreSetLeds_CMockIgnore(void);
#define lighthouseCoreSetLeds_Expect(red, orange, green) lighthouseCoreSetLeds_CMockExpect(__LINE__, red, orange, green)
void lighthouseCoreSetLeds_CMockExpect(UNITY_LINE_TYPE cmock_line, lighthouseCoreLedState_t red, lighthouseCoreLedState_t orange, lighthouseCoreLedState_t green);
typedef void (* CMOCK_lighthouseCoreSetLeds_CALLBACK)(lighthouseCoreLedState_t red, lighthouseCoreLedState_t orange, lighthouseCoreLedState_t green, int cmock_num_calls);
void lighthouseCoreSetLeds_StubWithCallback(CMOCK_lighthouseCoreSetLeds_CALLBACK Callback);
#define lighthouseCoreSetLeds_IgnoreArg_red() lighthouseCoreSetLeds_CMockIgnoreArg_red(__LINE__)
void lighthouseCoreSetLeds_CMockIgnoreArg_red(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetLeds_IgnoreArg_orange() lighthouseCoreSetLeds_CMockIgnoreArg_orange(__LINE__)
void lighthouseCoreSetLeds_CMockIgnoreArg_orange(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreSetLeds_IgnoreArg_green() lighthouseCoreSetLeds_CMockIgnoreArg_green(__LINE__)
void lighthouseCoreSetLeds_CMockIgnoreArg_green(UNITY_LINE_TYPE cmock_line);
#define lighthouseCoreLedTimer_Ignore() lighthouseCoreLedTimer_CMockIgnore()
void lighthouseCoreLedTimer_CMockIgnore(void);
#define lighthouseCoreLedTimer_Expect() lighthouseCoreLedTimer_CMockExpect(__LINE__)
void lighthouseCoreLedTimer_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_lighthouseCoreLedTimer_CALLBACK)(int cmock_num_calls);
void lighthouseCoreLedTimer_StubWithCallback(CMOCK_lighthouseCoreLedTimer_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
