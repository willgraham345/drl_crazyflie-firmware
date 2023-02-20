/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_ootx_decoder.h"

static const char* CMockString_data = "data";
static const char* CMockString_ootxDecoderProcessBit = "ootxDecoderProcessBit";
static const char* CMockString_state = "state";

typedef struct _CMOCK_ootxDecoderProcessBit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  ootxDecoderState_t* Expected_state;
  int Expected_data;
  int Expected_state_Depth;
  int IgnoreArg_state;
  int IgnoreArg_data;

} CMOCK_ootxDecoderProcessBit_CALL_INSTANCE;

static struct mock_ootx_decoderInstance
{
  int ootxDecoderProcessBit_IgnoreBool;
  bool ootxDecoderProcessBit_FinalReturn;
  CMOCK_ootxDecoderProcessBit_CALLBACK ootxDecoderProcessBit_CallbackFunctionPointer;
  int ootxDecoderProcessBit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE ootxDecoderProcessBit_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_ootx_decoder_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.ootxDecoderProcessBit_IgnoreBool)
    Mock.ootxDecoderProcessBit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_ootxDecoderProcessBit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.ootxDecoderProcessBit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.ootxDecoderProcessBit_CallbackFunctionPointer != NULL)
    Mock.ootxDecoderProcessBit_CallInstance = CMOCK_GUTS_NONE;
}

void mock_ootx_decoder_Init(void)
{
  mock_ootx_decoder_Destroy();
}

void mock_ootx_decoder_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.ootxDecoderProcessBit_CallbackFunctionPointer = NULL;
  Mock.ootxDecoderProcessBit_CallbackCalls = 0;
}

bool ootxDecoderProcessBit(ootxDecoderState_t* state, int data)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ootxDecoderProcessBit);
  cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ootxDecoderProcessBit_CallInstance);
  Mock.ootxDecoderProcessBit_CallInstance = CMock_Guts_MemNext(Mock.ootxDecoderProcessBit_CallInstance);
  if (Mock.ootxDecoderProcessBit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ootxDecoderProcessBit_FinalReturn;
    Mock.ootxDecoderProcessBit_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.ootxDecoderProcessBit_CallbackFunctionPointer != NULL)
  {
    return Mock.ootxDecoderProcessBit_CallbackFunctionPointer(state, data, Mock.ootxDecoderProcessBit_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_state)
  {
    UNITY_SET_DETAILS(CMockString_ootxDecoderProcessBit,CMockString_state);
    if (cmock_call_instance->Expected_state == NULL)
      { UNITY_TEST_ASSERT_NULL(state, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_state), (void*)(state), sizeof(ootxDecoderState_t), cmock_call_instance->Expected_state_Depth, cmock_line, CMockStringMismatch); }
  }
  if (!cmock_call_instance->IgnoreArg_data)
  {
    UNITY_SET_DETAILS(CMockString_ootxDecoderProcessBit,CMockString_data);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_data, data, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_ootxDecoderProcessBit(CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance, ootxDecoderState_t* state, int state_Depth, int data)
{
  cmock_call_instance->Expected_state = state;
  cmock_call_instance->Expected_state_Depth = state_Depth;
  cmock_call_instance->IgnoreArg_state = 0;
  cmock_call_instance->Expected_data = data;
  cmock_call_instance->IgnoreArg_data = 0;
}

void ootxDecoderProcessBit_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ootxDecoderProcessBit_CALL_INSTANCE));
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ootxDecoderProcessBit_CallInstance = CMock_Guts_MemChain(Mock.ootxDecoderProcessBit_CallInstance, cmock_guts_index);
  Mock.ootxDecoderProcessBit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ootxDecoderProcessBit_IgnoreBool = (int)1;
}

void ootxDecoderProcessBit_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ootxDecoderState_t* state, int data, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ootxDecoderProcessBit_CALL_INSTANCE));
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ootxDecoderProcessBit_CallInstance = CMock_Guts_MemChain(Mock.ootxDecoderProcessBit_CallInstance, cmock_guts_index);
  Mock.ootxDecoderProcessBit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_ootxDecoderProcessBit(cmock_call_instance, state, 1, data);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void ootxDecoderProcessBit_StubWithCallback(CMOCK_ootxDecoderProcessBit_CALLBACK Callback)
{
  Mock.ootxDecoderProcessBit_IgnoreBool = (int)0;
  Mock.ootxDecoderProcessBit_CallbackFunctionPointer = Callback;
}

void ootxDecoderProcessBit_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, ootxDecoderState_t* state, int state_Depth, int data, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ootxDecoderProcessBit_CALL_INSTANCE));
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ootxDecoderProcessBit_CallInstance = CMock_Guts_MemChain(Mock.ootxDecoderProcessBit_CallInstance, cmock_guts_index);
  Mock.ootxDecoderProcessBit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_ootxDecoderProcessBit(cmock_call_instance, state, state_Depth, data);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void ootxDecoderProcessBit_CMockIgnoreArg_state(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.ootxDecoderProcessBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_state = 1;
}

void ootxDecoderProcessBit_CMockIgnoreArg_data(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_ootxDecoderProcessBit_CALL_INSTANCE* cmock_call_instance = (CMOCK_ootxDecoderProcessBit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.ootxDecoderProcessBit_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_data = 1;
}
