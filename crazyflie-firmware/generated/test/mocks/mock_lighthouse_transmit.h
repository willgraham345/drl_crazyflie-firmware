/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LIGHTHOUSE_TRANSMIT_H
#define _MOCK_LIGHTHOUSE_TRANSMIT_H

#include "lighthouse_transmit.h"

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

void mock_lighthouse_transmit_Init(void);
void mock_lighthouse_transmit_Destroy(void);
void mock_lighthouse_transmit_Verify(void);




#define lighthouseTransmitProcessFrame_Ignore() lighthouseTransmitProcessFrame_CMockIgnore()
void lighthouseTransmitProcessFrame_CMockIgnore(void);
#define lighthouseTransmitProcessFrame_Expect(frame) lighthouseTransmitProcessFrame_CMockExpect(__LINE__, frame)
void lighthouseTransmitProcessFrame_CMockExpect(UNITY_LINE_TYPE cmock_line, const lighthouseUartFrame_t* frame);
typedef void (* CMOCK_lighthouseTransmitProcessFrame_CALLBACK)(const lighthouseUartFrame_t* frame, int cmock_num_calls);
void lighthouseTransmitProcessFrame_StubWithCallback(CMOCK_lighthouseTransmitProcessFrame_CALLBACK Callback);
#define lighthouseTransmitProcessFrame_ExpectWithArray(frame, frame_Depth) lighthouseTransmitProcessFrame_CMockExpectWithArray(__LINE__, frame, frame_Depth)
void lighthouseTransmitProcessFrame_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, const lighthouseUartFrame_t* frame, int frame_Depth);
#define lighthouseTransmitProcessFrame_IgnoreArg_frame() lighthouseTransmitProcessFrame_CMockIgnoreArg_frame(__LINE__)
void lighthouseTransmitProcessFrame_CMockIgnoreArg_frame(UNITY_LINE_TYPE cmock_line);
#define lighthouseTransmitProcessTimeout_Ignore() lighthouseTransmitProcessTimeout_CMockIgnore()
void lighthouseTransmitProcessTimeout_CMockIgnore(void);
#define lighthouseTransmitProcessTimeout_Expect() lighthouseTransmitProcessTimeout_CMockExpect(__LINE__)
void lighthouseTransmitProcessTimeout_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_lighthouseTransmitProcessTimeout_CALLBACK)(int cmock_num_calls);
void lighthouseTransmitProcessTimeout_StubWithCallback(CMOCK_lighthouseTransmitProcessTimeout_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
