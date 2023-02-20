/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LIGHTHOUSE_DECK_FLASHER_H
#define _MOCK_LIGHTHOUSE_DECK_FLASHER_H

#include "lighthouse_deck_flasher.h"

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

void mock_lighthouse_deck_flasher_Init(void);
void mock_lighthouse_deck_flasher_Destroy(void);
void mock_lighthouse_deck_flasher_Verify(void);




#define lighthouseDeckFlasherCheckVersionAndBoot_IgnoreAndReturn(cmock_retval) lighthouseDeckFlasherCheckVersionAndBoot_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherCheckVersionAndBoot_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define lighthouseDeckFlasherCheckVersionAndBoot_ExpectAndReturn(cmock_retval) lighthouseDeckFlasherCheckVersionAndBoot_CMockExpectAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherCheckVersionAndBoot_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
typedef bool (* CMOCK_lighthouseDeckFlasherCheckVersionAndBoot_CALLBACK)(int cmock_num_calls);
void lighthouseDeckFlasherCheckVersionAndBoot_StubWithCallback(CMOCK_lighthouseDeckFlasherCheckVersionAndBoot_CALLBACK Callback);
#define lighthouseDeckFlasherRead_IgnoreAndReturn(cmock_retval) lighthouseDeckFlasherRead_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherRead_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define lighthouseDeckFlasherRead_ExpectAndReturn(memAddr, readLen, buffer, cmock_retval) lighthouseDeckFlasherRead_CMockExpectAndReturn(__LINE__, memAddr, readLen, buffer, cmock_retval)
void lighthouseDeckFlasherRead_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint32_t memAddr, const uint8_t readLen, uint8_t* buffer, bool cmock_to_return);
typedef bool (* CMOCK_lighthouseDeckFlasherRead_CALLBACK)(const uint32_t memAddr, const uint8_t readLen, uint8_t* buffer, int cmock_num_calls);
void lighthouseDeckFlasherRead_StubWithCallback(CMOCK_lighthouseDeckFlasherRead_CALLBACK Callback);
#define lighthouseDeckFlasherRead_ExpectWithArrayAndReturn(memAddr, readLen, buffer, buffer_Depth, cmock_retval) lighthouseDeckFlasherRead_CMockExpectWithArrayAndReturn(__LINE__, memAddr, readLen, buffer, buffer_Depth, cmock_retval)
void lighthouseDeckFlasherRead_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const uint32_t memAddr, const uint8_t readLen, uint8_t* buffer, int buffer_Depth, bool cmock_to_return);
#define lighthouseDeckFlasherRead_IgnoreArg_memAddr() lighthouseDeckFlasherRead_CMockIgnoreArg_memAddr(__LINE__)
void lighthouseDeckFlasherRead_CMockIgnoreArg_memAddr(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherRead_IgnoreArg_readLen() lighthouseDeckFlasherRead_CMockIgnoreArg_readLen(__LINE__)
void lighthouseDeckFlasherRead_CMockIgnoreArg_readLen(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherRead_IgnoreArg_buffer() lighthouseDeckFlasherRead_CMockIgnoreArg_buffer(__LINE__)
void lighthouseDeckFlasherRead_CMockIgnoreArg_buffer(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherWrite_IgnoreAndReturn(cmock_retval) lighthouseDeckFlasherWrite_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherWrite_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define lighthouseDeckFlasherWrite_ExpectAndReturn(memAddr, writeLen, buffer, memDef, cmock_retval) lighthouseDeckFlasherWrite_CMockExpectAndReturn(__LINE__, memAddr, writeLen, buffer, memDef, cmock_retval)
void lighthouseDeckFlasherWrite_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint32_t memAddr, const uint8_t writeLen, const uint8_t* buffer, const DeckMemDef_t* memDef, bool cmock_to_return);
typedef bool (* CMOCK_lighthouseDeckFlasherWrite_CALLBACK)(const uint32_t memAddr, const uint8_t writeLen, const uint8_t* buffer, const DeckMemDef_t* memDef, int cmock_num_calls);
void lighthouseDeckFlasherWrite_StubWithCallback(CMOCK_lighthouseDeckFlasherWrite_CALLBACK Callback);
#define lighthouseDeckFlasherWrite_ExpectWithArrayAndReturn(memAddr, writeLen, buffer, buffer_Depth, memDef, memDef_Depth, cmock_retval) lighthouseDeckFlasherWrite_CMockExpectWithArrayAndReturn(__LINE__, memAddr, writeLen, buffer, buffer_Depth, memDef, memDef_Depth, cmock_retval)
void lighthouseDeckFlasherWrite_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const uint32_t memAddr, const uint8_t writeLen, const uint8_t* buffer, int buffer_Depth, const DeckMemDef_t* memDef, int memDef_Depth, bool cmock_to_return);
#define lighthouseDeckFlasherWrite_IgnoreArg_memAddr() lighthouseDeckFlasherWrite_CMockIgnoreArg_memAddr(__LINE__)
void lighthouseDeckFlasherWrite_CMockIgnoreArg_memAddr(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherWrite_IgnoreArg_writeLen() lighthouseDeckFlasherWrite_CMockIgnoreArg_writeLen(__LINE__)
void lighthouseDeckFlasherWrite_CMockIgnoreArg_writeLen(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherWrite_IgnoreArg_buffer() lighthouseDeckFlasherWrite_CMockIgnoreArg_buffer(__LINE__)
void lighthouseDeckFlasherWrite_CMockIgnoreArg_buffer(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherWrite_IgnoreArg_memDef() lighthouseDeckFlasherWrite_CMockIgnoreArg_memDef(__LINE__)
void lighthouseDeckFlasherWrite_CMockIgnoreArg_memDef(UNITY_LINE_TYPE cmock_line);
#define lighthouseDeckFlasherPropertiesQuery_IgnoreAndReturn(cmock_retval) lighthouseDeckFlasherPropertiesQuery_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherPropertiesQuery_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define lighthouseDeckFlasherPropertiesQuery_ExpectAndReturn(cmock_retval) lighthouseDeckFlasherPropertiesQuery_CMockExpectAndReturn(__LINE__, cmock_retval)
void lighthouseDeckFlasherPropertiesQuery_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_lighthouseDeckFlasherPropertiesQuery_CALLBACK)(int cmock_num_calls);
void lighthouseDeckFlasherPropertiesQuery_StubWithCallback(CMOCK_lighthouseDeckFlasherPropertiesQuery_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
