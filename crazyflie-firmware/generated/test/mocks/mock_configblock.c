/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_configblock.h"

static const char* CMockString_configblockGetCalibPitch = "configblockGetCalibPitch";
static const char* CMockString_configblockGetCalibRoll = "configblockGetCalibRoll";
static const char* CMockString_configblockGetRadioAddress = "configblockGetRadioAddress";
static const char* CMockString_configblockGetRadioChannel = "configblockGetRadioChannel";
static const char* CMockString_configblockGetRadioSpeed = "configblockGetRadioSpeed";
static const char* CMockString_configblockInit = "configblockInit";
static const char* CMockString_configblockTest = "configblockTest";

typedef struct _CMOCK_configblockInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;

} CMOCK_configblockInit_CALL_INSTANCE;

typedef struct _CMOCK_configblockTest_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;

} CMOCK_configblockTest_CALL_INSTANCE;

typedef struct _CMOCK_configblockGetRadioChannel_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;

} CMOCK_configblockGetRadioChannel_CALL_INSTANCE;

typedef struct _CMOCK_configblockGetRadioSpeed_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;

} CMOCK_configblockGetRadioSpeed_CALL_INSTANCE;

typedef struct _CMOCK_configblockGetRadioAddress_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint64_t ReturnVal;

} CMOCK_configblockGetRadioAddress_CALL_INSTANCE;

typedef struct _CMOCK_configblockGetCalibPitch_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;

} CMOCK_configblockGetCalibPitch_CALL_INSTANCE;

typedef struct _CMOCK_configblockGetCalibRoll_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;

} CMOCK_configblockGetCalibRoll_CALL_INSTANCE;

static struct mock_configblockInstance
{
  int configblockInit_IgnoreBool;
  int configblockInit_FinalReturn;
  CMOCK_configblockInit_CALLBACK configblockInit_CallbackFunctionPointer;
  int configblockInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockInit_CallInstance;
  int configblockTest_IgnoreBool;
  bool configblockTest_FinalReturn;
  CMOCK_configblockTest_CALLBACK configblockTest_CallbackFunctionPointer;
  int configblockTest_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockTest_CallInstance;
  int configblockGetRadioChannel_IgnoreBool;
  int configblockGetRadioChannel_FinalReturn;
  CMOCK_configblockGetRadioChannel_CALLBACK configblockGetRadioChannel_CallbackFunctionPointer;
  int configblockGetRadioChannel_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockGetRadioChannel_CallInstance;
  int configblockGetRadioSpeed_IgnoreBool;
  int configblockGetRadioSpeed_FinalReturn;
  CMOCK_configblockGetRadioSpeed_CALLBACK configblockGetRadioSpeed_CallbackFunctionPointer;
  int configblockGetRadioSpeed_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockGetRadioSpeed_CallInstance;
  int configblockGetRadioAddress_IgnoreBool;
  uint64_t configblockGetRadioAddress_FinalReturn;
  CMOCK_configblockGetRadioAddress_CALLBACK configblockGetRadioAddress_CallbackFunctionPointer;
  int configblockGetRadioAddress_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockGetRadioAddress_CallInstance;
  int configblockGetCalibPitch_IgnoreBool;
  float configblockGetCalibPitch_FinalReturn;
  CMOCK_configblockGetCalibPitch_CALLBACK configblockGetCalibPitch_CallbackFunctionPointer;
  int configblockGetCalibPitch_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockGetCalibPitch_CallInstance;
  int configblockGetCalibRoll_IgnoreBool;
  float configblockGetCalibRoll_FinalReturn;
  CMOCK_configblockGetCalibRoll_CALLBACK configblockGetCalibRoll_CallbackFunctionPointer;
  int configblockGetCalibRoll_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE configblockGetCalibRoll_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_configblock_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.configblockInit_IgnoreBool)
    Mock.configblockInit_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockInit);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockInit_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockInit_CallbackFunctionPointer != NULL)
    Mock.configblockInit_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockTest_IgnoreBool)
    Mock.configblockTest_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockTest);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockTest_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockTest_CallbackFunctionPointer != NULL)
    Mock.configblockTest_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockGetRadioChannel_IgnoreBool)
    Mock.configblockGetRadioChannel_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioChannel);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockGetRadioChannel_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockGetRadioChannel_CallbackFunctionPointer != NULL)
    Mock.configblockGetRadioChannel_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockGetRadioSpeed_IgnoreBool)
    Mock.configblockGetRadioSpeed_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioSpeed);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockGetRadioSpeed_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockGetRadioSpeed_CallbackFunctionPointer != NULL)
    Mock.configblockGetRadioSpeed_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockGetRadioAddress_IgnoreBool)
    Mock.configblockGetRadioAddress_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioAddress);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockGetRadioAddress_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockGetRadioAddress_CallbackFunctionPointer != NULL)
    Mock.configblockGetRadioAddress_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockGetCalibPitch_IgnoreBool)
    Mock.configblockGetCalibPitch_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockGetCalibPitch);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockGetCalibPitch_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockGetCalibPitch_CallbackFunctionPointer != NULL)
    Mock.configblockGetCalibPitch_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.configblockGetCalibRoll_IgnoreBool)
    Mock.configblockGetCalibRoll_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_configblockGetCalibRoll);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.configblockGetCalibRoll_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.configblockGetCalibRoll_CallbackFunctionPointer != NULL)
    Mock.configblockGetCalibRoll_CallInstance = CMOCK_GUTS_NONE;
}

void mock_configblock_Init(void)
{
  mock_configblock_Destroy();
}

void mock_configblock_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.configblockInit_CallbackFunctionPointer = NULL;
  Mock.configblockInit_CallbackCalls = 0;
  Mock.configblockTest_CallbackFunctionPointer = NULL;
  Mock.configblockTest_CallbackCalls = 0;
  Mock.configblockGetRadioChannel_CallbackFunctionPointer = NULL;
  Mock.configblockGetRadioChannel_CallbackCalls = 0;
  Mock.configblockGetRadioSpeed_CallbackFunctionPointer = NULL;
  Mock.configblockGetRadioSpeed_CallbackCalls = 0;
  Mock.configblockGetRadioAddress_CallbackFunctionPointer = NULL;
  Mock.configblockGetRadioAddress_CallbackCalls = 0;
  Mock.configblockGetCalibPitch_CallbackFunctionPointer = NULL;
  Mock.configblockGetCalibPitch_CallbackCalls = 0;
  Mock.configblockGetCalibRoll_CallbackFunctionPointer = NULL;
  Mock.configblockGetCalibRoll_CallbackCalls = 0;
}

int configblockInit(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockInit);
  cmock_call_instance = (CMOCK_configblockInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockInit_CallInstance);
  Mock.configblockInit_CallInstance = CMock_Guts_MemNext(Mock.configblockInit_CallInstance);
  if (Mock.configblockInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockInit_FinalReturn;
    Mock.configblockInit_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockInit_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockInit_CallbackFunctionPointer(Mock.configblockInit_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockInit_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockInit_CALL_INSTANCE));
  CMOCK_configblockInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockInit_CallInstance = CMock_Guts_MemChain(Mock.configblockInit_CallInstance, cmock_guts_index);
  Mock.configblockInit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockInit_IgnoreBool = (int)1;
}

void configblockInit_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockInit_CALL_INSTANCE));
  CMOCK_configblockInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockInit_CallInstance = CMock_Guts_MemChain(Mock.configblockInit_CallInstance, cmock_guts_index);
  Mock.configblockInit_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockInit_StubWithCallback(CMOCK_configblockInit_CALLBACK Callback)
{
  Mock.configblockInit_IgnoreBool = (int)0;
  Mock.configblockInit_CallbackFunctionPointer = Callback;
}

bool configblockTest(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockTest_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockTest);
  cmock_call_instance = (CMOCK_configblockTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockTest_CallInstance);
  Mock.configblockTest_CallInstance = CMock_Guts_MemNext(Mock.configblockTest_CallInstance);
  if (Mock.configblockTest_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockTest_FinalReturn;
    Mock.configblockTest_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockTest_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockTest_CallbackFunctionPointer(Mock.configblockTest_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockTest_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockTest_CALL_INSTANCE));
  CMOCK_configblockTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockTest_CallInstance = CMock_Guts_MemChain(Mock.configblockTest_CallInstance, cmock_guts_index);
  Mock.configblockTest_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockTest_IgnoreBool = (int)1;
}

void configblockTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockTest_CALL_INSTANCE));
  CMOCK_configblockTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockTest_CallInstance = CMock_Guts_MemChain(Mock.configblockTest_CallInstance, cmock_guts_index);
  Mock.configblockTest_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockTest_StubWithCallback(CMOCK_configblockTest_CALLBACK Callback)
{
  Mock.configblockTest_IgnoreBool = (int)0;
  Mock.configblockTest_CallbackFunctionPointer = Callback;
}

int configblockGetRadioChannel(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockGetRadioChannel_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioChannel);
  cmock_call_instance = (CMOCK_configblockGetRadioChannel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockGetRadioChannel_CallInstance);
  Mock.configblockGetRadioChannel_CallInstance = CMock_Guts_MemNext(Mock.configblockGetRadioChannel_CallInstance);
  if (Mock.configblockGetRadioChannel_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockGetRadioChannel_FinalReturn;
    Mock.configblockGetRadioChannel_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockGetRadioChannel_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockGetRadioChannel_CallbackFunctionPointer(Mock.configblockGetRadioChannel_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockGetRadioChannel_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioChannel_CALL_INSTANCE));
  CMOCK_configblockGetRadioChannel_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioChannel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioChannel_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioChannel_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioChannel_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockGetRadioChannel_IgnoreBool = (int)1;
}

void configblockGetRadioChannel_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioChannel_CALL_INSTANCE));
  CMOCK_configblockGetRadioChannel_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioChannel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioChannel_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioChannel_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioChannel_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockGetRadioChannel_StubWithCallback(CMOCK_configblockGetRadioChannel_CALLBACK Callback)
{
  Mock.configblockGetRadioChannel_IgnoreBool = (int)0;
  Mock.configblockGetRadioChannel_CallbackFunctionPointer = Callback;
}

int configblockGetRadioSpeed(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockGetRadioSpeed_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioSpeed);
  cmock_call_instance = (CMOCK_configblockGetRadioSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockGetRadioSpeed_CallInstance);
  Mock.configblockGetRadioSpeed_CallInstance = CMock_Guts_MemNext(Mock.configblockGetRadioSpeed_CallInstance);
  if (Mock.configblockGetRadioSpeed_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockGetRadioSpeed_FinalReturn;
    Mock.configblockGetRadioSpeed_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockGetRadioSpeed_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockGetRadioSpeed_CallbackFunctionPointer(Mock.configblockGetRadioSpeed_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockGetRadioSpeed_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioSpeed_CALL_INSTANCE));
  CMOCK_configblockGetRadioSpeed_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioSpeed_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioSpeed_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioSpeed_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockGetRadioSpeed_IgnoreBool = (int)1;
}

void configblockGetRadioSpeed_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioSpeed_CALL_INSTANCE));
  CMOCK_configblockGetRadioSpeed_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioSpeed_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioSpeed_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioSpeed_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockGetRadioSpeed_StubWithCallback(CMOCK_configblockGetRadioSpeed_CALLBACK Callback)
{
  Mock.configblockGetRadioSpeed_IgnoreBool = (int)0;
  Mock.configblockGetRadioSpeed_CallbackFunctionPointer = Callback;
}

uint64_t configblockGetRadioAddress(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockGetRadioAddress_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockGetRadioAddress);
  cmock_call_instance = (CMOCK_configblockGetRadioAddress_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockGetRadioAddress_CallInstance);
  Mock.configblockGetRadioAddress_CallInstance = CMock_Guts_MemNext(Mock.configblockGetRadioAddress_CallInstance);
  if (Mock.configblockGetRadioAddress_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockGetRadioAddress_FinalReturn;
    memcpy(&Mock.configblockGetRadioAddress_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(uint64_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockGetRadioAddress_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockGetRadioAddress_CallbackFunctionPointer(Mock.configblockGetRadioAddress_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockGetRadioAddress_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint64_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioAddress_CALL_INSTANCE));
  CMOCK_configblockGetRadioAddress_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioAddress_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioAddress_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioAddress_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioAddress_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockGetRadioAddress_IgnoreBool = (int)1;
}

void configblockGetRadioAddress_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint64_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetRadioAddress_CALL_INSTANCE));
  CMOCK_configblockGetRadioAddress_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetRadioAddress_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetRadioAddress_CallInstance = CMock_Guts_MemChain(Mock.configblockGetRadioAddress_CallInstance, cmock_guts_index);
  Mock.configblockGetRadioAddress_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(uint64_t));
  UNITY_CLR_DETAILS();
}

void configblockGetRadioAddress_StubWithCallback(CMOCK_configblockGetRadioAddress_CALLBACK Callback)
{
  Mock.configblockGetRadioAddress_IgnoreBool = (int)0;
  Mock.configblockGetRadioAddress_CallbackFunctionPointer = Callback;
}

float configblockGetCalibPitch(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockGetCalibPitch_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockGetCalibPitch);
  cmock_call_instance = (CMOCK_configblockGetCalibPitch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockGetCalibPitch_CallInstance);
  Mock.configblockGetCalibPitch_CallInstance = CMock_Guts_MemNext(Mock.configblockGetCalibPitch_CallInstance);
  if (Mock.configblockGetCalibPitch_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockGetCalibPitch_FinalReturn;
    Mock.configblockGetCalibPitch_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockGetCalibPitch_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockGetCalibPitch_CallbackFunctionPointer(Mock.configblockGetCalibPitch_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockGetCalibPitch_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetCalibPitch_CALL_INSTANCE));
  CMOCK_configblockGetCalibPitch_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetCalibPitch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetCalibPitch_CallInstance = CMock_Guts_MemChain(Mock.configblockGetCalibPitch_CallInstance, cmock_guts_index);
  Mock.configblockGetCalibPitch_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockGetCalibPitch_IgnoreBool = (int)1;
}

void configblockGetCalibPitch_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetCalibPitch_CALL_INSTANCE));
  CMOCK_configblockGetCalibPitch_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetCalibPitch_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetCalibPitch_CallInstance = CMock_Guts_MemChain(Mock.configblockGetCalibPitch_CallInstance, cmock_guts_index);
  Mock.configblockGetCalibPitch_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockGetCalibPitch_StubWithCallback(CMOCK_configblockGetCalibPitch_CALLBACK Callback)
{
  Mock.configblockGetCalibPitch_IgnoreBool = (int)0;
  Mock.configblockGetCalibPitch_CallbackFunctionPointer = Callback;
}

float configblockGetCalibRoll(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_configblockGetCalibRoll_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_configblockGetCalibRoll);
  cmock_call_instance = (CMOCK_configblockGetCalibRoll_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.configblockGetCalibRoll_CallInstance);
  Mock.configblockGetCalibRoll_CallInstance = CMock_Guts_MemNext(Mock.configblockGetCalibRoll_CallInstance);
  if (Mock.configblockGetCalibRoll_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.configblockGetCalibRoll_FinalReturn;
    Mock.configblockGetCalibRoll_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.configblockGetCalibRoll_CallbackFunctionPointer != NULL)
  {
    return Mock.configblockGetCalibRoll_CallbackFunctionPointer(Mock.configblockGetCalibRoll_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void configblockGetCalibRoll_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetCalibRoll_CALL_INSTANCE));
  CMOCK_configblockGetCalibRoll_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetCalibRoll_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetCalibRoll_CallInstance = CMock_Guts_MemChain(Mock.configblockGetCalibRoll_CallInstance, cmock_guts_index);
  Mock.configblockGetCalibRoll_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.configblockGetCalibRoll_IgnoreBool = (int)1;
}

void configblockGetCalibRoll_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_configblockGetCalibRoll_CALL_INSTANCE));
  CMOCK_configblockGetCalibRoll_CALL_INSTANCE* cmock_call_instance = (CMOCK_configblockGetCalibRoll_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.configblockGetCalibRoll_CallInstance = CMock_Guts_MemChain(Mock.configblockGetCalibRoll_CallInstance, cmock_guts_index);
  Mock.configblockGetCalibRoll_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void configblockGetCalibRoll_StubWithCallback(CMOCK_configblockGetCalibRoll_CALLBACK Callback)
{
  Mock.configblockGetCalibRoll_IgnoreBool = (int)0;
  Mock.configblockGetCalibRoll_CallbackFunctionPointer = Callback;
}

