/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_lighthouse_transmit.h"

static const char* CMockString_frame = "frame";
static const char* CMockString_lighthouseTransmitProcessFrame = "lighthouseTransmitProcessFrame";
static const char* CMockString_lighthouseTransmitProcessTimeout = "lighthouseTransmitProcessTimeout";

typedef struct _CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  const lighthouseUartFrame_t* Expected_frame;
  int Expected_frame_Depth;
  int IgnoreArg_frame;

} CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE;

static struct mock_lighthouse_transmitInstance
{
  int lighthouseTransmitProcessFrame_IgnoreBool;
  CMOCK_lighthouseTransmitProcessFrame_CALLBACK lighthouseTransmitProcessFrame_CallbackFunctionPointer;
  int lighthouseTransmitProcessFrame_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseTransmitProcessFrame_CallInstance;
  int lighthouseTransmitProcessTimeout_IgnoreBool;
  CMOCK_lighthouseTransmitProcessTimeout_CALLBACK lighthouseTransmitProcessTimeout_CallbackFunctionPointer;
  int lighthouseTransmitProcessTimeout_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseTransmitProcessTimeout_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_lighthouse_transmit_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.lighthouseTransmitProcessFrame_IgnoreBool)
    Mock.lighthouseTransmitProcessFrame_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseTransmitProcessFrame);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseTransmitProcessFrame_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseTransmitProcessFrame_CallbackFunctionPointer != NULL)
    Mock.lighthouseTransmitProcessFrame_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseTransmitProcessTimeout_IgnoreBool)
    Mock.lighthouseTransmitProcessTimeout_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseTransmitProcessTimeout);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseTransmitProcessTimeout_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseTransmitProcessTimeout_CallbackFunctionPointer != NULL)
    Mock.lighthouseTransmitProcessTimeout_CallInstance = CMOCK_GUTS_NONE;
}

void mock_lighthouse_transmit_Init(void)
{
  mock_lighthouse_transmit_Destroy();
}

void mock_lighthouse_transmit_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.lighthouseTransmitProcessFrame_CallbackFunctionPointer = NULL;
  Mock.lighthouseTransmitProcessFrame_CallbackCalls = 0;
  Mock.lighthouseTransmitProcessTimeout_CallbackFunctionPointer = NULL;
  Mock.lighthouseTransmitProcessTimeout_CallbackCalls = 0;
}

void lighthouseTransmitProcessFrame(const lighthouseUartFrame_t* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseTransmitProcessFrame);
  cmock_call_instance = (CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseTransmitProcessFrame_CallInstance);
  Mock.lighthouseTransmitProcessFrame_CallInstance = CMock_Guts_MemNext(Mock.lighthouseTransmitProcessFrame_CallInstance);
  if (Mock.lighthouseTransmitProcessFrame_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseTransmitProcessFrame_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseTransmitProcessFrame_CallbackFunctionPointer(frame, Mock.lighthouseTransmitProcessFrame_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_frame)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseTransmitProcessFrame,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(const lighthouseUartFrame_t), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_lighthouseTransmitProcessFrame(CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE* cmock_call_instance, const lighthouseUartFrame_t* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
  cmock_call_instance->IgnoreArg_frame = 0;
}

void lighthouseTransmitProcessFrame_CMockIgnore(void)
{
  Mock.lighthouseTransmitProcessFrame_IgnoreBool = (int)1;
}

void lighthouseTransmitProcessFrame_CMockExpect(UNITY_LINE_TYPE cmock_line, const lighthouseUartFrame_t* frame)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE));
  CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseTransmitProcessFrame_CallInstance = CMock_Guts_MemChain(Mock.lighthouseTransmitProcessFrame_CallInstance, cmock_guts_index);
  Mock.lighthouseTransmitProcessFrame_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lighthouseTransmitProcessFrame(cmock_call_instance, frame, 1);
  UNITY_CLR_DETAILS();
}

void lighthouseTransmitProcessFrame_StubWithCallback(CMOCK_lighthouseTransmitProcessFrame_CALLBACK Callback)
{
  Mock.lighthouseTransmitProcessFrame_IgnoreBool = (int)0;
  Mock.lighthouseTransmitProcessFrame_CallbackFunctionPointer = Callback;
}

void lighthouseTransmitProcessFrame_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, const lighthouseUartFrame_t* frame, int frame_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE));
  CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseTransmitProcessFrame_CallInstance = CMock_Guts_MemChain(Mock.lighthouseTransmitProcessFrame_CallInstance, cmock_guts_index);
  Mock.lighthouseTransmitProcessFrame_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lighthouseTransmitProcessFrame(cmock_call_instance, frame, frame_Depth);
}

void lighthouseTransmitProcessFrame_CMockIgnoreArg_frame(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseTransmitProcessFrame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseTransmitProcessFrame_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_frame = 1;
}

void lighthouseTransmitProcessTimeout(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseTransmitProcessTimeout);
  cmock_call_instance = (CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseTransmitProcessTimeout_CallInstance);
  Mock.lighthouseTransmitProcessTimeout_CallInstance = CMock_Guts_MemNext(Mock.lighthouseTransmitProcessTimeout_CallInstance);
  if (Mock.lighthouseTransmitProcessTimeout_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseTransmitProcessTimeout_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseTransmitProcessTimeout_CallbackFunctionPointer(Mock.lighthouseTransmitProcessTimeout_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void lighthouseTransmitProcessTimeout_CMockIgnore(void)
{
  Mock.lighthouseTransmitProcessTimeout_IgnoreBool = (int)1;
}

void lighthouseTransmitProcessTimeout_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE));
  CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseTransmitProcessTimeout_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseTransmitProcessTimeout_CallInstance = CMock_Guts_MemChain(Mock.lighthouseTransmitProcessTimeout_CallInstance, cmock_guts_index);
  Mock.lighthouseTransmitProcessTimeout_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void lighthouseTransmitProcessTimeout_StubWithCallback(CMOCK_lighthouseTransmitProcessTimeout_CALLBACK Callback)
{
  Mock.lighthouseTransmitProcessTimeout_IgnoreBool = (int)0;
  Mock.lighthouseTransmitProcessTimeout_CallbackFunctionPointer = Callback;
}

