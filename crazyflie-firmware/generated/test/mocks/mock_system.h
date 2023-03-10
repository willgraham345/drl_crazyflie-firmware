/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SYSTEM_H
#define _MOCK_SYSTEM_H

#include "system.h"

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

void mock_system_Init(void);
void mock_system_Destroy(void);
void mock_system_Verify(void);




#define systemInit_Ignore() systemInit_CMockIgnore()
void systemInit_CMockIgnore(void);
#define systemInit_Expect() systemInit_CMockExpect(__LINE__)
void systemInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemInit_CALLBACK)(int cmock_num_calls);
void systemInit_StubWithCallback(CMOCK_systemInit_CALLBACK Callback);
#define systemTest_IgnoreAndReturn(cmock_retval) systemTest_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void systemTest_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define systemTest_ExpectAndReturn(cmock_retval) systemTest_CMockExpectAndReturn(__LINE__, cmock_retval)
void systemTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_systemTest_CALLBACK)(int cmock_num_calls);
void systemTest_StubWithCallback(CMOCK_systemTest_CALLBACK Callback);
#define systemLaunch_Ignore() systemLaunch_CMockIgnore()
void systemLaunch_CMockIgnore(void);
#define systemLaunch_Expect() systemLaunch_CMockExpect(__LINE__)
void systemLaunch_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemLaunch_CALLBACK)(int cmock_num_calls);
void systemLaunch_StubWithCallback(CMOCK_systemLaunch_CALLBACK Callback);
#define systemStart_Ignore() systemStart_CMockIgnore()
void systemStart_CMockIgnore(void);
#define systemStart_Expect() systemStart_CMockExpect(__LINE__)
void systemStart_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemStart_CALLBACK)(int cmock_num_calls);
void systemStart_StubWithCallback(CMOCK_systemStart_CALLBACK Callback);
#define systemWaitStart_Ignore() systemWaitStart_CMockIgnore()
void systemWaitStart_CMockIgnore(void);
#define systemWaitStart_Expect() systemWaitStart_CMockExpect(__LINE__)
void systemWaitStart_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemWaitStart_CALLBACK)(int cmock_num_calls);
void systemWaitStart_StubWithCallback(CMOCK_systemWaitStart_CALLBACK Callback);
#define systemSetArmed_Ignore() systemSetArmed_CMockIgnore()
void systemSetArmed_CMockIgnore(void);
#define systemSetArmed_Expect(val) systemSetArmed_CMockExpect(__LINE__, val)
void systemSetArmed_CMockExpect(UNITY_LINE_TYPE cmock_line, bool val);
typedef void (* CMOCK_systemSetArmed_CALLBACK)(bool val, int cmock_num_calls);
void systemSetArmed_StubWithCallback(CMOCK_systemSetArmed_CALLBACK Callback);
#define systemSetArmed_IgnoreArg_val() systemSetArmed_CMockIgnoreArg_val(__LINE__)
void systemSetArmed_CMockIgnoreArg_val(UNITY_LINE_TYPE cmock_line);
#define systemIsArmed_IgnoreAndReturn(cmock_retval) systemIsArmed_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void systemIsArmed_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define systemIsArmed_ExpectAndReturn(cmock_retval) systemIsArmed_CMockExpectAndReturn(__LINE__, cmock_retval)
void systemIsArmed_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_systemIsArmed_CALLBACK)(int cmock_num_calls);
void systemIsArmed_StubWithCallback(CMOCK_systemIsArmed_CALLBACK Callback);
#define systemRequestShutdown_Ignore() systemRequestShutdown_CMockIgnore()
void systemRequestShutdown_CMockIgnore(void);
#define systemRequestShutdown_Expect() systemRequestShutdown_CMockExpect(__LINE__)
void systemRequestShutdown_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemRequestShutdown_CALLBACK)(int cmock_num_calls);
void systemRequestShutdown_StubWithCallback(CMOCK_systemRequestShutdown_CALLBACK Callback);
#define systemRequestNRFVersion_Ignore() systemRequestNRFVersion_CMockIgnore()
void systemRequestNRFVersion_CMockIgnore(void);
#define systemRequestNRFVersion_Expect() systemRequestNRFVersion_CMockExpect(__LINE__)
void systemRequestNRFVersion_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemRequestNRFVersion_CALLBACK)(int cmock_num_calls);
void systemRequestNRFVersion_StubWithCallback(CMOCK_systemRequestNRFVersion_CALLBACK Callback);
#define systemSyslinkReceive_Ignore() systemSyslinkReceive_CMockIgnore()
void systemSyslinkReceive_CMockIgnore(void);
#define systemSyslinkReceive_Expect() systemSyslinkReceive_CMockExpect(__LINE__)
void systemSyslinkReceive_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_systemSyslinkReceive_CALLBACK)(int cmock_num_calls);
void systemSyslinkReceive_StubWithCallback(CMOCK_systemSyslinkReceive_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
