/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_lighthouse_storage.h"

static const char* CMockString_baseStation = "baseStation";
static const char* CMockString_calibData = "calibData";
static const char* CMockString_geoData = "geoData";
static const char* CMockString_lighthouseStorageInitializeCalibDataFromStorage = "lighthouseStorageInitializeCalibDataFromStorage";
static const char* CMockString_lighthouseStorageInitializeGeoDataFromStorage = "lighthouseStorageInitializeGeoDataFromStorage";
static const char* CMockString_lighthouseStorageInitializeSystemTypeFromStorage = "lighthouseStorageInitializeSystemTypeFromStorage";
static const char* CMockString_lighthouseStoragePersistCalibDataBackground = "lighthouseStoragePersistCalibDataBackground";
static const char* CMockString_lighthouseStoragePersistData = "lighthouseStoragePersistData";
static const char* CMockString_lighthouseStoragePersistSystemType = "lighthouseStoragePersistSystemType";
static const char* CMockString_lighthouseStorageVerifySetStorageVersion = "lighthouseStorageVerifySetStorageVersion";
static const char* CMockString_type = "type";

typedef struct _CMOCK_lighthouseStoragePersistData_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  uint8_t Expected_baseStation;
  bool Expected_geoData;
  bool Expected_calibData;
  int IgnoreArg_baseStation;
  int IgnoreArg_geoData;
  int IgnoreArg_calibData;

} CMOCK_lighthouseStoragePersistData_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  uint8_t Expected_baseStation;
  int IgnoreArg_baseStation;

} CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  lighthouseBaseStationType_t Expected_type;
  int IgnoreArg_type;

} CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE;

typedef struct _CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE;

static struct mock_lighthouse_storageInstance
{
  int lighthouseStoragePersistData_IgnoreBool;
  bool lighthouseStoragePersistData_FinalReturn;
  CMOCK_lighthouseStoragePersistData_CALLBACK lighthouseStoragePersistData_CallbackFunctionPointer;
  int lighthouseStoragePersistData_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStoragePersistData_CallInstance;
  int lighthouseStoragePersistCalibDataBackground_IgnoreBool;
  CMOCK_lighthouseStoragePersistCalibDataBackground_CALLBACK lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer;
  int lighthouseStoragePersistCalibDataBackground_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStoragePersistCalibDataBackground_CallInstance;
  int lighthouseStoragePersistSystemType_IgnoreBool;
  CMOCK_lighthouseStoragePersistSystemType_CALLBACK lighthouseStoragePersistSystemType_CallbackFunctionPointer;
  int lighthouseStoragePersistSystemType_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStoragePersistSystemType_CallInstance;
  int lighthouseStorageVerifySetStorageVersion_IgnoreBool;
  CMOCK_lighthouseStorageVerifySetStorageVersion_CALLBACK lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer;
  int lighthouseStorageVerifySetStorageVersion_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStorageVerifySetStorageVersion_CallInstance;
  int lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool;
  CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALLBACK lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer;
  int lighthouseStorageInitializeGeoDataFromStorage_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStorageInitializeGeoDataFromStorage_CallInstance;
  int lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool;
  CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALLBACK lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer;
  int lighthouseStorageInitializeCalibDataFromStorage_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStorageInitializeCalibDataFromStorage_CallInstance;
  int lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool;
  CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALLBACK lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer;
  int lighthouseStorageInitializeSystemTypeFromStorage_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE lighthouseStorageInitializeSystemTypeFromStorage_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_lighthouse_storage_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.lighthouseStoragePersistData_IgnoreBool)
    Mock.lighthouseStoragePersistData_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistData);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStoragePersistData_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStoragePersistData_CallbackFunctionPointer != NULL)
    Mock.lighthouseStoragePersistData_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStoragePersistCalibDataBackground_IgnoreBool)
    Mock.lighthouseStoragePersistCalibDataBackground_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistCalibDataBackground);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStoragePersistCalibDataBackground_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer != NULL)
    Mock.lighthouseStoragePersistCalibDataBackground_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStoragePersistSystemType_IgnoreBool)
    Mock.lighthouseStoragePersistSystemType_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistSystemType);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStoragePersistSystemType_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStoragePersistSystemType_CallbackFunctionPointer != NULL)
    Mock.lighthouseStoragePersistSystemType_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStorageVerifySetStorageVersion_IgnoreBool)
    Mock.lighthouseStorageVerifySetStorageVersion_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageVerifySetStorageVersion);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStorageVerifySetStorageVersion_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer != NULL)
    Mock.lighthouseStorageVerifySetStorageVersion_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool)
    Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeGeoDataFromStorage);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer != NULL)
    Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool)
    Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeCalibDataFromStorage);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer != NULL)
    Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool)
    Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeSystemTypeFromStorage);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer != NULL)
    Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance = CMOCK_GUTS_NONE;
}

void mock_lighthouse_storage_Init(void)
{
  mock_lighthouse_storage_Destroy();
}

void mock_lighthouse_storage_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.lighthouseStoragePersistData_CallbackFunctionPointer = NULL;
  Mock.lighthouseStoragePersistData_CallbackCalls = 0;
  Mock.lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer = NULL;
  Mock.lighthouseStoragePersistCalibDataBackground_CallbackCalls = 0;
  Mock.lighthouseStoragePersistSystemType_CallbackFunctionPointer = NULL;
  Mock.lighthouseStoragePersistSystemType_CallbackCalls = 0;
  Mock.lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer = NULL;
  Mock.lighthouseStorageVerifySetStorageVersion_CallbackCalls = 0;
  Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer = NULL;
  Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackCalls = 0;
  Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer = NULL;
  Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackCalls = 0;
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer = NULL;
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackCalls = 0;
}

bool lighthouseStoragePersistData(const uint8_t baseStation, const bool geoData, const bool calibData)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistData);
  cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStoragePersistData_CallInstance);
  Mock.lighthouseStoragePersistData_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStoragePersistData_CallInstance);
  if (Mock.lighthouseStoragePersistData_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.lighthouseStoragePersistData_FinalReturn;
    Mock.lighthouseStoragePersistData_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.lighthouseStoragePersistData_CallbackFunctionPointer != NULL)
  {
    return Mock.lighthouseStoragePersistData_CallbackFunctionPointer(baseStation, geoData, calibData, Mock.lighthouseStoragePersistData_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_baseStation)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseStoragePersistData,CMockString_baseStation);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_baseStation, baseStation, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_geoData)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseStoragePersistData,CMockString_geoData);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_geoData, geoData, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_calibData)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseStoragePersistData,CMockString_calibData);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_calibData, calibData, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_lighthouseStoragePersistData(CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance, const uint8_t baseStation, const bool geoData, const bool calibData)
{
  cmock_call_instance->Expected_baseStation = baseStation;
  cmock_call_instance->IgnoreArg_baseStation = 0;
  cmock_call_instance->Expected_geoData = geoData;
  cmock_call_instance->IgnoreArg_geoData = 0;
  cmock_call_instance->Expected_calibData = calibData;
  cmock_call_instance->IgnoreArg_calibData = 0;
}

void lighthouseStoragePersistData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStoragePersistData_CALL_INSTANCE));
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStoragePersistData_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStoragePersistData_CallInstance, cmock_guts_index);
  Mock.lighthouseStoragePersistData_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.lighthouseStoragePersistData_IgnoreBool = (int)1;
}

void lighthouseStoragePersistData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t baseStation, const bool geoData, const bool calibData, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStoragePersistData_CALL_INSTANCE));
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStoragePersistData_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStoragePersistData_CallInstance, cmock_guts_index);
  Mock.lighthouseStoragePersistData_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lighthouseStoragePersistData(cmock_call_instance, baseStation, geoData, calibData);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void lighthouseStoragePersistData_StubWithCallback(CMOCK_lighthouseStoragePersistData_CALLBACK Callback)
{
  Mock.lighthouseStoragePersistData_IgnoreBool = (int)0;
  Mock.lighthouseStoragePersistData_CallbackFunctionPointer = Callback;
}

void lighthouseStoragePersistData_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseStoragePersistData_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_baseStation = 1;
}

void lighthouseStoragePersistData_CMockIgnoreArg_geoData(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseStoragePersistData_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_geoData = 1;
}

void lighthouseStoragePersistData_CMockIgnoreArg_calibData(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseStoragePersistData_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistData_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseStoragePersistData_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_calibData = 1;
}

void lighthouseStoragePersistCalibDataBackground(const uint8_t baseStation)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistCalibDataBackground);
  cmock_call_instance = (CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStoragePersistCalibDataBackground_CallInstance);
  Mock.lighthouseStoragePersistCalibDataBackground_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStoragePersistCalibDataBackground_CallInstance);
  if (Mock.lighthouseStoragePersistCalibDataBackground_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer(baseStation, Mock.lighthouseStoragePersistCalibDataBackground_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_baseStation)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseStoragePersistCalibDataBackground,CMockString_baseStation);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_baseStation, baseStation, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_lighthouseStoragePersistCalibDataBackground(CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE* cmock_call_instance, const uint8_t baseStation)
{
  cmock_call_instance->Expected_baseStation = baseStation;
  cmock_call_instance->IgnoreArg_baseStation = 0;
}

void lighthouseStoragePersistCalibDataBackground_CMockIgnore(void)
{
  Mock.lighthouseStoragePersistCalibDataBackground_IgnoreBool = (int)1;
}

void lighthouseStoragePersistCalibDataBackground_CMockExpect(UNITY_LINE_TYPE cmock_line, const uint8_t baseStation)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE));
  CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStoragePersistCalibDataBackground_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStoragePersistCalibDataBackground_CallInstance, cmock_guts_index);
  Mock.lighthouseStoragePersistCalibDataBackground_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lighthouseStoragePersistCalibDataBackground(cmock_call_instance, baseStation);
  UNITY_CLR_DETAILS();
}

void lighthouseStoragePersistCalibDataBackground_StubWithCallback(CMOCK_lighthouseStoragePersistCalibDataBackground_CALLBACK Callback)
{
  Mock.lighthouseStoragePersistCalibDataBackground_IgnoreBool = (int)0;
  Mock.lighthouseStoragePersistCalibDataBackground_CallbackFunctionPointer = Callback;
}

void lighthouseStoragePersistCalibDataBackground_CMockIgnoreArg_baseStation(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistCalibDataBackground_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseStoragePersistCalibDataBackground_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_baseStation = 1;
}

void lighthouseStoragePersistSystemType(lighthouseBaseStationType_t type)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStoragePersistSystemType);
  cmock_call_instance = (CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStoragePersistSystemType_CallInstance);
  Mock.lighthouseStoragePersistSystemType_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStoragePersistSystemType_CallInstance);
  if (Mock.lighthouseStoragePersistSystemType_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStoragePersistSystemType_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStoragePersistSystemType_CallbackFunctionPointer(type, Mock.lighthouseStoragePersistSystemType_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_type)
  {
    UNITY_SET_DETAILS(CMockString_lighthouseStoragePersistSystemType,CMockString_type);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_type), (void*)(&type), sizeof(lighthouseBaseStationType_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_lighthouseStoragePersistSystemType(CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE* cmock_call_instance, lighthouseBaseStationType_t type)
{
  memcpy(&cmock_call_instance->Expected_type, &type, sizeof(lighthouseBaseStationType_t));
  cmock_call_instance->IgnoreArg_type = 0;
}

void lighthouseStoragePersistSystemType_CMockIgnore(void)
{
  Mock.lighthouseStoragePersistSystemType_IgnoreBool = (int)1;
}

void lighthouseStoragePersistSystemType_CMockExpect(UNITY_LINE_TYPE cmock_line, lighthouseBaseStationType_t type)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE));
  CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStoragePersistSystemType_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStoragePersistSystemType_CallInstance, cmock_guts_index);
  Mock.lighthouseStoragePersistSystemType_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lighthouseStoragePersistSystemType(cmock_call_instance, type);
  UNITY_CLR_DETAILS();
}

void lighthouseStoragePersistSystemType_StubWithCallback(CMOCK_lighthouseStoragePersistSystemType_CALLBACK Callback)
{
  Mock.lighthouseStoragePersistSystemType_IgnoreBool = (int)0;
  Mock.lighthouseStoragePersistSystemType_CallbackFunctionPointer = Callback;
}

void lighthouseStoragePersistSystemType_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStoragePersistSystemType_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.lighthouseStoragePersistSystemType_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_type = 1;
}

void lighthouseStorageVerifySetStorageVersion(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageVerifySetStorageVersion);
  cmock_call_instance = (CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStorageVerifySetStorageVersion_CallInstance);
  Mock.lighthouseStorageVerifySetStorageVersion_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStorageVerifySetStorageVersion_CallInstance);
  if (Mock.lighthouseStorageVerifySetStorageVersion_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer(Mock.lighthouseStorageVerifySetStorageVersion_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageVerifySetStorageVersion_CMockIgnore(void)
{
  Mock.lighthouseStorageVerifySetStorageVersion_IgnoreBool = (int)1;
}

void lighthouseStorageVerifySetStorageVersion_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE));
  CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStorageVerifySetStorageVersion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStorageVerifySetStorageVersion_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStorageVerifySetStorageVersion_CallInstance, cmock_guts_index);
  Mock.lighthouseStorageVerifySetStorageVersion_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageVerifySetStorageVersion_StubWithCallback(CMOCK_lighthouseStorageVerifySetStorageVersion_CALLBACK Callback)
{
  Mock.lighthouseStorageVerifySetStorageVersion_IgnoreBool = (int)0;
  Mock.lighthouseStorageVerifySetStorageVersion_CallbackFunctionPointer = Callback;
}

void lighthouseStorageInitializeGeoDataFromStorage(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeGeoDataFromStorage);
  cmock_call_instance = (CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance);
  Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance);
  if (Mock.lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer(Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeGeoDataFromStorage_CMockIgnore(void)
{
  Mock.lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool = (int)1;
}

void lighthouseStorageInitializeGeoDataFromStorage_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE));
  CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStorageInitializeGeoDataFromStorage_CallInstance, cmock_guts_index);
  Mock.lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeGeoDataFromStorage_StubWithCallback(CMOCK_lighthouseStorageInitializeGeoDataFromStorage_CALLBACK Callback)
{
  Mock.lighthouseStorageInitializeGeoDataFromStorage_IgnoreBool = (int)0;
  Mock.lighthouseStorageInitializeGeoDataFromStorage_CallbackFunctionPointer = Callback;
}

void lighthouseStorageInitializeCalibDataFromStorage(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeCalibDataFromStorage);
  cmock_call_instance = (CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance);
  Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance);
  if (Mock.lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer(Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeCalibDataFromStorage_CMockIgnore(void)
{
  Mock.lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool = (int)1;
}

void lighthouseStorageInitializeCalibDataFromStorage_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE));
  CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStorageInitializeCalibDataFromStorage_CallInstance, cmock_guts_index);
  Mock.lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeCalibDataFromStorage_StubWithCallback(CMOCK_lighthouseStorageInitializeCalibDataFromStorage_CALLBACK Callback)
{
  Mock.lighthouseStorageInitializeCalibDataFromStorage_IgnoreBool = (int)0;
  Mock.lighthouseStorageInitializeCalibDataFromStorage_CallbackFunctionPointer = Callback;
}

void lighthouseStorageInitializeSystemTypeFromStorage(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lighthouseStorageInitializeSystemTypeFromStorage);
  cmock_call_instance = (CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance);
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance = CMock_Guts_MemNext(Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance);
  if (Mock.lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer != NULL)
  {
    Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer(Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeSystemTypeFromStorage_CMockIgnore(void)
{
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool = (int)1;
}

void lighthouseStorageInitializeSystemTypeFromStorage_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE));
  CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE* cmock_call_instance = (CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance = CMock_Guts_MemChain(Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallInstance, cmock_guts_index);
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void lighthouseStorageInitializeSystemTypeFromStorage_StubWithCallback(CMOCK_lighthouseStorageInitializeSystemTypeFromStorage_CALLBACK Callback)
{
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_IgnoreBool = (int)0;
  Mock.lighthouseStorageInitializeSystemTypeFromStorage_CallbackFunctionPointer = Callback;
}

