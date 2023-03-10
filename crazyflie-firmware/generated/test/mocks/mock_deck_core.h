/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_DECK_CORE_H
#define _MOCK_DECK_CORE_H

#include "deck_core.h"

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

void mock_deck_core_Init(void);
void mock_deck_core_Destroy(void);
void mock_deck_core_Verify(void);




#define deckInit_Ignore() deckInit_CMockIgnore()
void deckInit_CMockIgnore(void);
#define deckInit_Expect() deckInit_CMockExpect(__LINE__)
void deckInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_deckInit_CALLBACK)(int cmock_num_calls);
void deckInit_StubWithCallback(CMOCK_deckInit_CALLBACK Callback);
#define deckTest_IgnoreAndReturn(cmock_retval) deckTest_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckTest_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define deckTest_ExpectAndReturn(cmock_retval) deckTest_CMockExpectAndReturn(__LINE__, cmock_retval)
void deckTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_deckTest_CALLBACK)(int cmock_num_calls);
void deckTest_StubWithCallback(CMOCK_deckTest_CALLBACK Callback);
#define deckCount_IgnoreAndReturn(cmock_retval) deckCount_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckCount_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define deckCount_ExpectAndReturn(cmock_retval) deckCount_CMockExpectAndReturn(__LINE__, cmock_retval)
void deckCount_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_deckCount_CALLBACK)(int cmock_num_calls);
void deckCount_StubWithCallback(CMOCK_deckCount_CALLBACK Callback);
#define deckInfo_IgnoreAndReturn(cmock_retval) deckInfo_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckInfo_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, DeckInfo* cmock_to_return);
#define deckInfo_ExpectAndReturn(i, cmock_retval) deckInfo_CMockExpectAndReturn(__LINE__, i, cmock_retval)
void deckInfo_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int i, DeckInfo* cmock_to_return);
typedef DeckInfo* (* CMOCK_deckInfo_CALLBACK)(int i, int cmock_num_calls);
void deckInfo_StubWithCallback(CMOCK_deckInfo_CALLBACK Callback);
#define deckInfo_IgnoreArg_i() deckInfo_CMockIgnoreArg_i(__LINE__)
void deckInfo_CMockIgnoreArg_i(UNITY_LINE_TYPE cmock_line);
#define deckTlvHasElement_IgnoreAndReturn(cmock_retval) deckTlvHasElement_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckTlvHasElement_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define deckTlvHasElement_ExpectAndReturn(tlv, type, cmock_retval) deckTlvHasElement_CMockExpectAndReturn(__LINE__, tlv, type, cmock_retval)
void deckTlvHasElement_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int type, bool cmock_to_return);
typedef bool (* CMOCK_deckTlvHasElement_CALLBACK)(TlvArea* tlv, int type, int cmock_num_calls);
void deckTlvHasElement_StubWithCallback(CMOCK_deckTlvHasElement_CALLBACK Callback);
#define deckTlvHasElement_ExpectWithArrayAndReturn(tlv, tlv_Depth, type, cmock_retval) deckTlvHasElement_CMockExpectWithArrayAndReturn(__LINE__, tlv, tlv_Depth, type, cmock_retval)
void deckTlvHasElement_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int tlv_Depth, int type, bool cmock_to_return);
#define deckTlvHasElement_IgnoreArg_tlv() deckTlvHasElement_CMockIgnoreArg_tlv(__LINE__)
void deckTlvHasElement_CMockIgnoreArg_tlv(UNITY_LINE_TYPE cmock_line);
#define deckTlvHasElement_IgnoreArg_type() deckTlvHasElement_CMockIgnoreArg_type(__LINE__)
void deckTlvHasElement_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetString_IgnoreAndReturn(cmock_retval) deckTlvGetString_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckTlvGetString_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define deckTlvGetString_ExpectAndReturn(tlv, type, string, maxLength, cmock_retval) deckTlvGetString_CMockExpectAndReturn(__LINE__, tlv, type, string, maxLength, cmock_retval)
void deckTlvGetString_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int type, char* string, int maxLength, int cmock_to_return);
typedef int (* CMOCK_deckTlvGetString_CALLBACK)(TlvArea* tlv, int type, char* string, int maxLength, int cmock_num_calls);
void deckTlvGetString_StubWithCallback(CMOCK_deckTlvGetString_CALLBACK Callback);
#define deckTlvGetString_ExpectWithArrayAndReturn(tlv, tlv_Depth, type, string, maxLength, cmock_retval) deckTlvGetString_CMockExpectWithArrayAndReturn(__LINE__, tlv, tlv_Depth, type, string, maxLength, cmock_retval)
void deckTlvGetString_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int tlv_Depth, int type, char* string, int maxLength, int cmock_to_return);
#define deckTlvGetString_IgnoreArg_tlv() deckTlvGetString_CMockIgnoreArg_tlv(__LINE__)
void deckTlvGetString_CMockIgnoreArg_tlv(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetString_IgnoreArg_type() deckTlvGetString_CMockIgnoreArg_type(__LINE__)
void deckTlvGetString_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetString_IgnoreArg_string() deckTlvGetString_CMockIgnoreArg_string(__LINE__)
void deckTlvGetString_CMockIgnoreArg_string(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetString_IgnoreArg_maxLength() deckTlvGetString_CMockIgnoreArg_maxLength(__LINE__)
void deckTlvGetString_CMockIgnoreArg_maxLength(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetBuffer_IgnoreAndReturn(cmock_retval) deckTlvGetBuffer_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckTlvGetBuffer_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, char* cmock_to_return);
#define deckTlvGetBuffer_ExpectAndReturn(tlv, type, length, cmock_retval) deckTlvGetBuffer_CMockExpectAndReturn(__LINE__, tlv, type, length, cmock_retval)
void deckTlvGetBuffer_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int type, int* length, char* cmock_to_return);
typedef char* (* CMOCK_deckTlvGetBuffer_CALLBACK)(TlvArea* tlv, int type, int* length, int cmock_num_calls);
void deckTlvGetBuffer_StubWithCallback(CMOCK_deckTlvGetBuffer_CALLBACK Callback);
#define deckTlvGetBuffer_ExpectWithArrayAndReturn(tlv, tlv_Depth, type, length, length_Depth, cmock_retval) deckTlvGetBuffer_CMockExpectWithArrayAndReturn(__LINE__, tlv, tlv_Depth, type, length, length_Depth, cmock_retval)
void deckTlvGetBuffer_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int tlv_Depth, int type, int* length, int length_Depth, char* cmock_to_return);
#define deckTlvGetBuffer_IgnoreArg_tlv() deckTlvGetBuffer_CMockIgnoreArg_tlv(__LINE__)
void deckTlvGetBuffer_CMockIgnoreArg_tlv(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetBuffer_IgnoreArg_type() deckTlvGetBuffer_CMockIgnoreArg_type(__LINE__)
void deckTlvGetBuffer_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetBuffer_IgnoreArg_length() deckTlvGetBuffer_CMockIgnoreArg_length(__LINE__)
void deckTlvGetBuffer_CMockIgnoreArg_length(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetTlv_Ignore() deckTlvGetTlv_CMockIgnore()
void deckTlvGetTlv_CMockIgnore(void);
#define deckTlvGetTlv_Expect(tlv, type, output) deckTlvGetTlv_CMockExpect(__LINE__, tlv, type, output)
void deckTlvGetTlv_CMockExpect(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int type, TlvArea* output);
typedef void (* CMOCK_deckTlvGetTlv_CALLBACK)(TlvArea* tlv, int type, TlvArea* output, int cmock_num_calls);
void deckTlvGetTlv_StubWithCallback(CMOCK_deckTlvGetTlv_CALLBACK Callback);
#define deckTlvGetTlv_ExpectWithArray(tlv, tlv_Depth, type, output, output_Depth) deckTlvGetTlv_CMockExpectWithArray(__LINE__, tlv, tlv_Depth, type, output, output_Depth)
void deckTlvGetTlv_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, TlvArea* tlv, int tlv_Depth, int type, TlvArea* output, int output_Depth);
#define deckTlvGetTlv_IgnoreArg_tlv() deckTlvGetTlv_CMockIgnoreArg_tlv(__LINE__)
void deckTlvGetTlv_CMockIgnoreArg_tlv(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetTlv_IgnoreArg_type() deckTlvGetTlv_CMockIgnoreArg_type(__LINE__)
void deckTlvGetTlv_CMockIgnoreArg_type(UNITY_LINE_TYPE cmock_line);
#define deckTlvGetTlv_IgnoreArg_output() deckTlvGetTlv_CMockIgnoreArg_output(__LINE__)
void deckTlvGetTlv_CMockIgnoreArg_output(UNITY_LINE_TYPE cmock_line);
#define deckDriverCount_IgnoreAndReturn(cmock_retval) deckDriverCount_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckDriverCount_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define deckDriverCount_ExpectAndReturn(cmock_retval) deckDriverCount_CMockExpectAndReturn(__LINE__, cmock_retval)
void deckDriverCount_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_deckDriverCount_CALLBACK)(int cmock_num_calls);
void deckDriverCount_StubWithCallback(CMOCK_deckDriverCount_CALLBACK Callback);
#define deckGetDriver_IgnoreAndReturn(cmock_retval) deckGetDriver_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckGetDriver_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, const struct deck_driver* cmock_to_return);
#define deckGetDriver_ExpectAndReturn(i, cmock_retval) deckGetDriver_CMockExpectAndReturn(__LINE__, i, cmock_retval)
void deckGetDriver_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int i, const struct deck_driver* cmock_to_return);
typedef const struct deck_driver* (* CMOCK_deckGetDriver_CALLBACK)(int i, int cmock_num_calls);
void deckGetDriver_StubWithCallback(CMOCK_deckGetDriver_CALLBACK Callback);
#define deckGetDriver_IgnoreArg_i() deckGetDriver_CMockIgnoreArg_i(__LINE__)
void deckGetDriver_CMockIgnoreArg_i(UNITY_LINE_TYPE cmock_line);
#define deckFindDriverByVidPid_IgnoreAndReturn(cmock_retval) deckFindDriverByVidPid_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckFindDriverByVidPid_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, const struct deck_driver* cmock_to_return);
#define deckFindDriverByVidPid_ExpectAndReturn(vid, pid, cmock_retval) deckFindDriverByVidPid_CMockExpectAndReturn(__LINE__, vid, pid, cmock_retval)
void deckFindDriverByVidPid_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t vid, uint8_t pid, const struct deck_driver* cmock_to_return);
typedef const struct deck_driver* (* CMOCK_deckFindDriverByVidPid_CALLBACK)(uint8_t vid, uint8_t pid, int cmock_num_calls);
void deckFindDriverByVidPid_StubWithCallback(CMOCK_deckFindDriverByVidPid_CALLBACK Callback);
#define deckFindDriverByVidPid_IgnoreArg_vid() deckFindDriverByVidPid_CMockIgnoreArg_vid(__LINE__)
void deckFindDriverByVidPid_CMockIgnoreArg_vid(UNITY_LINE_TYPE cmock_line);
#define deckFindDriverByVidPid_IgnoreArg_pid() deckFindDriverByVidPid_CMockIgnoreArg_pid(__LINE__)
void deckFindDriverByVidPid_CMockIgnoreArg_pid(UNITY_LINE_TYPE cmock_line);
#define deckFindDriverByName_IgnoreAndReturn(cmock_retval) deckFindDriverByName_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckFindDriverByName_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, const struct deck_driver* cmock_to_return);
#define deckFindDriverByName_ExpectAndReturn(name, cmock_retval) deckFindDriverByName_CMockExpectAndReturn(__LINE__, name, cmock_retval)
void deckFindDriverByName_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* name, const struct deck_driver* cmock_to_return);
typedef const struct deck_driver* (* CMOCK_deckFindDriverByName_CALLBACK)(char* name, int cmock_num_calls);
void deckFindDriverByName_StubWithCallback(CMOCK_deckFindDriverByName_CALLBACK Callback);
#define deckFindDriverByName_IgnoreArg_name() deckFindDriverByName_CMockIgnoreArg_name(__LINE__)
void deckFindDriverByName_CMockIgnoreArg_name(UNITY_LINE_TYPE cmock_line);
#define deckGetRequiredEstimator_IgnoreAndReturn(cmock_retval) deckGetRequiredEstimator_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckGetRequiredEstimator_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, StateEstimatorType cmock_to_return);
#define deckGetRequiredEstimator_ExpectAndReturn(cmock_retval) deckGetRequiredEstimator_CMockExpectAndReturn(__LINE__, cmock_retval)
void deckGetRequiredEstimator_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, StateEstimatorType cmock_to_return);
typedef StateEstimatorType (* CMOCK_deckGetRequiredEstimator_CALLBACK)(int cmock_num_calls);
void deckGetRequiredEstimator_StubWithCallback(CMOCK_deckGetRequiredEstimator_CALLBACK Callback);
#define deckGetRequiredLowInterferenceRadioMode_IgnoreAndReturn(cmock_retval) deckGetRequiredLowInterferenceRadioMode_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void deckGetRequiredLowInterferenceRadioMode_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define deckGetRequiredLowInterferenceRadioMode_ExpectAndReturn(cmock_retval) deckGetRequiredLowInterferenceRadioMode_CMockExpectAndReturn(__LINE__, cmock_retval)
void deckGetRequiredLowInterferenceRadioMode_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_deckGetRequiredLowInterferenceRadioMode_CALLBACK)(int cmock_num_calls);
void deckGetRequiredLowInterferenceRadioMode_StubWithCallback(CMOCK_deckGetRequiredLowInterferenceRadioMode_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
