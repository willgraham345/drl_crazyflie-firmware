/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_CRTP_H
#define _MOCK_CRTP_H

#include "crtp.h"

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

void mock_crtp_Init(void);
void mock_crtp_Destroy(void);
void mock_crtp_Verify(void);




#define crtpInit_Ignore() crtpInit_CMockIgnore()
void crtpInit_CMockIgnore(void);
#define crtpInit_Expect() crtpInit_CMockExpect(__LINE__)
void crtpInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_crtpInit_CALLBACK)(int cmock_num_calls);
void crtpInit_StubWithCallback(CMOCK_crtpInit_CALLBACK Callback);
#define crtpTest_IgnoreAndReturn(cmock_retval) crtpTest_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpTest_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define crtpTest_ExpectAndReturn(cmock_retval) crtpTest_CMockExpectAndReturn(__LINE__, cmock_retval)
void crtpTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_crtpTest_CALLBACK)(int cmock_num_calls);
void crtpTest_StubWithCallback(CMOCK_crtpTest_CALLBACK Callback);
#define crtpInitTaskQueue_Ignore() crtpInitTaskQueue_CMockIgnore()
void crtpInitTaskQueue_CMockIgnore(void);
#define crtpInitTaskQueue_Expect(taskId) crtpInitTaskQueue_CMockExpect(__LINE__, taskId)
void crtpInitTaskQueue_CMockExpect(UNITY_LINE_TYPE cmock_line, CRTPPort taskId);
typedef void (* CMOCK_crtpInitTaskQueue_CALLBACK)(CRTPPort taskId, int cmock_num_calls);
void crtpInitTaskQueue_StubWithCallback(CMOCK_crtpInitTaskQueue_CALLBACK Callback);
#define crtpInitTaskQueue_IgnoreArg_taskId() crtpInitTaskQueue_CMockIgnoreArg_taskId(__LINE__)
void crtpInitTaskQueue_CMockIgnoreArg_taskId(UNITY_LINE_TYPE cmock_line);
#define crtpRegisterPortCB_Ignore() crtpRegisterPortCB_CMockIgnore()
void crtpRegisterPortCB_CMockIgnore(void);
#define crtpRegisterPortCB_Expect(port, cb) crtpRegisterPortCB_CMockExpect(__LINE__, port, cb)
void crtpRegisterPortCB_CMockExpect(UNITY_LINE_TYPE cmock_line, int port, CrtpCallback cb);
typedef void (* CMOCK_crtpRegisterPortCB_CALLBACK)(int port, CrtpCallback cb, int cmock_num_calls);
void crtpRegisterPortCB_StubWithCallback(CMOCK_crtpRegisterPortCB_CALLBACK Callback);
#define crtpRegisterPortCB_IgnoreArg_port() crtpRegisterPortCB_CMockIgnoreArg_port(__LINE__)
void crtpRegisterPortCB_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line);
#define crtpRegisterPortCB_IgnoreArg_cb() crtpRegisterPortCB_CMockIgnoreArg_cb(__LINE__)
void crtpRegisterPortCB_CMockIgnoreArg_cb(UNITY_LINE_TYPE cmock_line);
#define crtpSendPacket_IgnoreAndReturn(cmock_retval) crtpSendPacket_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpSendPacket_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpSendPacket_ExpectAndReturn(p, cmock_retval) crtpSendPacket_CMockExpectAndReturn(__LINE__, p, cmock_retval)
void crtpSendPacket_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPacket* p, int cmock_to_return);
typedef int (* CMOCK_crtpSendPacket_CALLBACK)(CRTPPacket* p, int cmock_num_calls);
void crtpSendPacket_StubWithCallback(CMOCK_crtpSendPacket_CALLBACK Callback);
#define crtpSendPacket_ExpectWithArrayAndReturn(p, p_Depth, cmock_retval) crtpSendPacket_CMockExpectWithArrayAndReturn(__LINE__, p, p_Depth, cmock_retval)
void crtpSendPacket_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPacket* p, int p_Depth, int cmock_to_return);
#define crtpSendPacket_IgnoreArg_p() crtpSendPacket_CMockIgnoreArg_p(__LINE__)
void crtpSendPacket_CMockIgnoreArg_p(UNITY_LINE_TYPE cmock_line);
#define crtpSendPacketBlock_IgnoreAndReturn(cmock_retval) crtpSendPacketBlock_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpSendPacketBlock_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpSendPacketBlock_ExpectAndReturn(p, cmock_retval) crtpSendPacketBlock_CMockExpectAndReturn(__LINE__, p, cmock_retval)
void crtpSendPacketBlock_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPacket* p, int cmock_to_return);
typedef int (* CMOCK_crtpSendPacketBlock_CALLBACK)(CRTPPacket* p, int cmock_num_calls);
void crtpSendPacketBlock_StubWithCallback(CMOCK_crtpSendPacketBlock_CALLBACK Callback);
#define crtpSendPacketBlock_ExpectWithArrayAndReturn(p, p_Depth, cmock_retval) crtpSendPacketBlock_CMockExpectWithArrayAndReturn(__LINE__, p, p_Depth, cmock_retval)
void crtpSendPacketBlock_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPacket* p, int p_Depth, int cmock_to_return);
#define crtpSendPacketBlock_IgnoreArg_p() crtpSendPacketBlock_CMockIgnoreArg_p(__LINE__)
void crtpSendPacketBlock_CMockIgnoreArg_p(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacket_IgnoreAndReturn(cmock_retval) crtpReceivePacket_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpReceivePacket_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpReceivePacket_ExpectAndReturn(taskId, p, cmock_retval) crtpReceivePacket_CMockExpectAndReturn(__LINE__, taskId, p, cmock_retval)
void crtpReceivePacket_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int cmock_to_return);
typedef int (* CMOCK_crtpReceivePacket_CALLBACK)(CRTPPort taskId, CRTPPacket* p, int cmock_num_calls);
void crtpReceivePacket_StubWithCallback(CMOCK_crtpReceivePacket_CALLBACK Callback);
#define crtpReceivePacket_ExpectWithArrayAndReturn(taskId, p, p_Depth, cmock_retval) crtpReceivePacket_CMockExpectWithArrayAndReturn(__LINE__, taskId, p, p_Depth, cmock_retval)
void crtpReceivePacket_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int p_Depth, int cmock_to_return);
#define crtpReceivePacket_IgnoreArg_taskId() crtpReceivePacket_CMockIgnoreArg_taskId(__LINE__)
void crtpReceivePacket_CMockIgnoreArg_taskId(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacket_IgnoreArg_p() crtpReceivePacket_CMockIgnoreArg_p(__LINE__)
void crtpReceivePacket_CMockIgnoreArg_p(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacketWait_IgnoreAndReturn(cmock_retval) crtpReceivePacketWait_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpReceivePacketWait_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpReceivePacketWait_ExpectAndReturn(taskId, p, wait, cmock_retval) crtpReceivePacketWait_CMockExpectAndReturn(__LINE__, taskId, p, wait, cmock_retval)
void crtpReceivePacketWait_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int wait, int cmock_to_return);
typedef int (* CMOCK_crtpReceivePacketWait_CALLBACK)(CRTPPort taskId, CRTPPacket* p, int wait, int cmock_num_calls);
void crtpReceivePacketWait_StubWithCallback(CMOCK_crtpReceivePacketWait_CALLBACK Callback);
#define crtpReceivePacketWait_ExpectWithArrayAndReturn(taskId, p, p_Depth, wait, cmock_retval) crtpReceivePacketWait_CMockExpectWithArrayAndReturn(__LINE__, taskId, p, p_Depth, wait, cmock_retval)
void crtpReceivePacketWait_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int p_Depth, int wait, int cmock_to_return);
#define crtpReceivePacketWait_IgnoreArg_taskId() crtpReceivePacketWait_CMockIgnoreArg_taskId(__LINE__)
void crtpReceivePacketWait_CMockIgnoreArg_taskId(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacketWait_IgnoreArg_p() crtpReceivePacketWait_CMockIgnoreArg_p(__LINE__)
void crtpReceivePacketWait_CMockIgnoreArg_p(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacketWait_IgnoreArg_wait() crtpReceivePacketWait_CMockIgnoreArg_wait(__LINE__)
void crtpReceivePacketWait_CMockIgnoreArg_wait(UNITY_LINE_TYPE cmock_line);
#define crtpGetFreeTxQueuePackets_IgnoreAndReturn(cmock_retval) crtpGetFreeTxQueuePackets_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpGetFreeTxQueuePackets_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpGetFreeTxQueuePackets_ExpectAndReturn(cmock_retval) crtpGetFreeTxQueuePackets_CMockExpectAndReturn(__LINE__, cmock_retval)
void crtpGetFreeTxQueuePackets_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_crtpGetFreeTxQueuePackets_CALLBACK)(int cmock_num_calls);
void crtpGetFreeTxQueuePackets_StubWithCallback(CMOCK_crtpGetFreeTxQueuePackets_CALLBACK Callback);
#define crtpReceivePacketBlock_IgnoreAndReturn(cmock_retval) crtpReceivePacketBlock_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpReceivePacketBlock_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpReceivePacketBlock_ExpectAndReturn(taskId, p, cmock_retval) crtpReceivePacketBlock_CMockExpectAndReturn(__LINE__, taskId, p, cmock_retval)
void crtpReceivePacketBlock_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int cmock_to_return);
typedef int (* CMOCK_crtpReceivePacketBlock_CALLBACK)(CRTPPort taskId, CRTPPacket* p, int cmock_num_calls);
void crtpReceivePacketBlock_StubWithCallback(CMOCK_crtpReceivePacketBlock_CALLBACK Callback);
#define crtpReceivePacketBlock_ExpectWithArrayAndReturn(taskId, p, p_Depth, cmock_retval) crtpReceivePacketBlock_CMockExpectWithArrayAndReturn(__LINE__, taskId, p, p_Depth, cmock_retval)
void crtpReceivePacketBlock_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, CRTPPort taskId, CRTPPacket* p, int p_Depth, int cmock_to_return);
#define crtpReceivePacketBlock_IgnoreArg_taskId() crtpReceivePacketBlock_CMockIgnoreArg_taskId(__LINE__)
void crtpReceivePacketBlock_CMockIgnoreArg_taskId(UNITY_LINE_TYPE cmock_line);
#define crtpReceivePacketBlock_IgnoreArg_p() crtpReceivePacketBlock_CMockIgnoreArg_p(__LINE__)
void crtpReceivePacketBlock_CMockIgnoreArg_p(UNITY_LINE_TYPE cmock_line);
#define crtpSetLink_Ignore() crtpSetLink_CMockIgnore()
void crtpSetLink_CMockIgnore(void);
#define crtpSetLink_Expect(lk) crtpSetLink_CMockExpect(__LINE__, lk)
void crtpSetLink_CMockExpect(UNITY_LINE_TYPE cmock_line, struct crtpLinkOperations* lk);
typedef void (* CMOCK_crtpSetLink_CALLBACK)(struct crtpLinkOperations* lk, int cmock_num_calls);
void crtpSetLink_StubWithCallback(CMOCK_crtpSetLink_CALLBACK Callback);
#define crtpSetLink_ExpectWithArray(lk, lk_Depth) crtpSetLink_CMockExpectWithArray(__LINE__, lk, lk_Depth)
void crtpSetLink_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, struct crtpLinkOperations* lk, int lk_Depth);
#define crtpSetLink_IgnoreArg_lk() crtpSetLink_CMockIgnoreArg_lk(__LINE__)
void crtpSetLink_CMockIgnoreArg_lk(UNITY_LINE_TYPE cmock_line);
#define crtpIsConnected_IgnoreAndReturn(cmock_retval) crtpIsConnected_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpIsConnected_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define crtpIsConnected_ExpectAndReturn(cmock_retval) crtpIsConnected_CMockExpectAndReturn(__LINE__, cmock_retval)
void crtpIsConnected_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_crtpIsConnected_CALLBACK)(int cmock_num_calls);
void crtpIsConnected_StubWithCallback(CMOCK_crtpIsConnected_CALLBACK Callback);
#define crtpReset_IgnoreAndReturn(cmock_retval) crtpReset_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void crtpReset_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define crtpReset_ExpectAndReturn(cmock_retval) crtpReset_CMockExpectAndReturn(__LINE__, cmock_retval)
void crtpReset_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_crtpReset_CALLBACK)(int cmock_num_calls);
void crtpReset_StubWithCallback(CMOCK_crtpReset_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
