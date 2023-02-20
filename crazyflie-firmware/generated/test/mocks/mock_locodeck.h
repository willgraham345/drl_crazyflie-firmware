/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LOCODECK_H
#define _MOCK_LOCODECK_H

#include "locodeck.h"

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

void mock_locodeck_Init(void);
void mock_locodeck_Destroy(void);
void mock_locodeck_Verify(void);




#define locoDeckGetAnchorPosition_IgnoreAndReturn(cmock_retval) locoDeckGetAnchorPosition_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void locoDeckGetAnchorPosition_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define locoDeckGetAnchorPosition_ExpectAndReturn(anchorId, position, cmock_retval) locoDeckGetAnchorPosition_CMockExpectAndReturn(__LINE__, anchorId, position, cmock_retval)
void locoDeckGetAnchorPosition_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t anchorId, point_t* position, bool cmock_to_return);
typedef bool (* CMOCK_locoDeckGetAnchorPosition_CALLBACK)(const uint8_t anchorId, point_t* position, int cmock_num_calls);
void locoDeckGetAnchorPosition_StubWithCallback(CMOCK_locoDeckGetAnchorPosition_CALLBACK Callback);
#define locoDeckGetAnchorPosition_ExpectWithArrayAndReturn(anchorId, position, position_Depth, cmock_retval) locoDeckGetAnchorPosition_CMockExpectWithArrayAndReturn(__LINE__, anchorId, position, position_Depth, cmock_retval)
void locoDeckGetAnchorPosition_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t anchorId, point_t* position, int position_Depth, bool cmock_to_return);
#define locoDeckGetAnchorPosition_IgnoreArg_anchorId() locoDeckGetAnchorPosition_CMockIgnoreArg_anchorId(__LINE__)
void locoDeckGetAnchorPosition_CMockIgnoreArg_anchorId(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetAnchorPosition_IgnoreArg_position() locoDeckGetAnchorPosition_CMockIgnoreArg_position(__LINE__)
void locoDeckGetAnchorPosition_CMockIgnoreArg_position(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetAnchorIdList_IgnoreAndReturn(cmock_retval) locoDeckGetAnchorIdList_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void locoDeckGetAnchorIdList_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define locoDeckGetAnchorIdList_ExpectAndReturn(unorderedAnchorList, maxListSize, cmock_retval) locoDeckGetAnchorIdList_CMockExpectAndReturn(__LINE__, unorderedAnchorList, maxListSize, cmock_retval)
void locoDeckGetAnchorIdList_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* unorderedAnchorList, const int maxListSize, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_locoDeckGetAnchorIdList_CALLBACK)(uint8_t* unorderedAnchorList, const int maxListSize, int cmock_num_calls);
void locoDeckGetAnchorIdList_StubWithCallback(CMOCK_locoDeckGetAnchorIdList_CALLBACK Callback);
#define locoDeckGetAnchorIdList_ExpectWithArrayAndReturn(unorderedAnchorList, unorderedAnchorList_Depth, maxListSize, cmock_retval) locoDeckGetAnchorIdList_CMockExpectWithArrayAndReturn(__LINE__, unorderedAnchorList, unorderedAnchorList_Depth, maxListSize, cmock_retval)
void locoDeckGetAnchorIdList_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* unorderedAnchorList, int unorderedAnchorList_Depth, const int maxListSize, uint8_t cmock_to_return);
#define locoDeckGetAnchorIdList_IgnoreArg_unorderedAnchorList() locoDeckGetAnchorIdList_CMockIgnoreArg_unorderedAnchorList(__LINE__)
void locoDeckGetAnchorIdList_CMockIgnoreArg_unorderedAnchorList(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetAnchorIdList_IgnoreArg_maxListSize() locoDeckGetAnchorIdList_CMockIgnoreArg_maxListSize(__LINE__)
void locoDeckGetAnchorIdList_CMockIgnoreArg_maxListSize(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetActiveAnchorIdList_IgnoreAndReturn(cmock_retval) locoDeckGetActiveAnchorIdList_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void locoDeckGetActiveAnchorIdList_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define locoDeckGetActiveAnchorIdList_ExpectAndReturn(unorderedAnchorList, maxListSize, cmock_retval) locoDeckGetActiveAnchorIdList_CMockExpectAndReturn(__LINE__, unorderedAnchorList, maxListSize, cmock_retval)
void locoDeckGetActiveAnchorIdList_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* unorderedAnchorList, const int maxListSize, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_locoDeckGetActiveAnchorIdList_CALLBACK)(uint8_t* unorderedAnchorList, const int maxListSize, int cmock_num_calls);
void locoDeckGetActiveAnchorIdList_StubWithCallback(CMOCK_locoDeckGetActiveAnchorIdList_CALLBACK Callback);
#define locoDeckGetActiveAnchorIdList_ExpectWithArrayAndReturn(unorderedAnchorList, unorderedAnchorList_Depth, maxListSize, cmock_retval) locoDeckGetActiveAnchorIdList_CMockExpectWithArrayAndReturn(__LINE__, unorderedAnchorList, unorderedAnchorList_Depth, maxListSize, cmock_retval)
void locoDeckGetActiveAnchorIdList_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* unorderedAnchorList, int unorderedAnchorList_Depth, const int maxListSize, uint8_t cmock_to_return);
#define locoDeckGetActiveAnchorIdList_IgnoreArg_unorderedAnchorList() locoDeckGetActiveAnchorIdList_CMockIgnoreArg_unorderedAnchorList(__LINE__)
void locoDeckGetActiveAnchorIdList_CMockIgnoreArg_unorderedAnchorList(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetActiveAnchorIdList_IgnoreArg_maxListSize() locoDeckGetActiveAnchorIdList_CMockIgnoreArg_maxListSize(__LINE__)
void locoDeckGetActiveAnchorIdList_CMockIgnoreArg_maxListSize(UNITY_LINE_TYPE cmock_line);
#define lpsSendLppShort_IgnoreAndReturn(cmock_retval) lpsSendLppShort_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lpsSendLppShort_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define lpsSendLppShort_ExpectAndReturn(destId, data, length, cmock_retval) lpsSendLppShort_CMockExpectAndReturn(__LINE__, destId, data, length, cmock_retval)
void lpsSendLppShort_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t destId, void* data, size_t length, bool cmock_to_return);
typedef bool (* CMOCK_lpsSendLppShort_CALLBACK)(uint8_t destId, void* data, size_t length, int cmock_num_calls);
void lpsSendLppShort_StubWithCallback(CMOCK_lpsSendLppShort_CALLBACK Callback);
#define lpsSendLppShort_ExpectWithArrayAndReturn(destId, data, data_Depth, length, cmock_retval) lpsSendLppShort_CMockExpectWithArrayAndReturn(__LINE__, destId, data, data_Depth, length, cmock_retval)
void lpsSendLppShort_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t destId, void* data, int data_Depth, size_t length, bool cmock_to_return);
#define lpsSendLppShort_IgnoreArg_destId() lpsSendLppShort_CMockIgnoreArg_destId(__LINE__)
void lpsSendLppShort_CMockIgnoreArg_destId(UNITY_LINE_TYPE cmock_line);
#define lpsSendLppShort_IgnoreArg_data() lpsSendLppShort_CMockIgnoreArg_data(__LINE__)
void lpsSendLppShort_CMockIgnoreArg_data(UNITY_LINE_TYPE cmock_line);
#define lpsSendLppShort_IgnoreArg_length() lpsSendLppShort_CMockIgnoreArg_length(__LINE__)
void lpsSendLppShort_CMockIgnoreArg_length(UNITY_LINE_TYPE cmock_line);
#define lpsGetLppShort_IgnoreAndReturn(cmock_retval) lpsGetLppShort_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void lpsGetLppShort_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define lpsGetLppShort_ExpectAndReturn(shortPacket, cmock_retval) lpsGetLppShort_CMockExpectAndReturn(__LINE__, shortPacket, cmock_retval)
void lpsGetLppShort_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, lpsLppShortPacket_t* shortPacket, bool cmock_to_return);
typedef bool (* CMOCK_lpsGetLppShort_CALLBACK)(lpsLppShortPacket_t* shortPacket, int cmock_num_calls);
void lpsGetLppShort_StubWithCallback(CMOCK_lpsGetLppShort_CALLBACK Callback);
#define lpsGetLppShort_ExpectWithArrayAndReturn(shortPacket, shortPacket_Depth, cmock_retval) lpsGetLppShort_CMockExpectWithArrayAndReturn(__LINE__, shortPacket, shortPacket_Depth, cmock_retval)
void lpsGetLppShort_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, lpsLppShortPacket_t* shortPacket, int shortPacket_Depth, bool cmock_to_return);
#define lpsGetLppShort_IgnoreArg_shortPacket() lpsGetLppShort_CMockIgnoreArg_shortPacket(__LINE__)
void lpsGetLppShort_CMockIgnoreArg_shortPacket(UNITY_LINE_TYPE cmock_line);
#define locoDeckGetRangingState_IgnoreAndReturn(cmock_retval) locoDeckGetRangingState_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void locoDeckGetRangingState_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint16_t cmock_to_return);
#define locoDeckGetRangingState_ExpectAndReturn(cmock_retval) locoDeckGetRangingState_CMockExpectAndReturn(__LINE__, cmock_retval)
void locoDeckGetRangingState_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint16_t cmock_to_return);
typedef uint16_t (* CMOCK_locoDeckGetRangingState_CALLBACK)(int cmock_num_calls);
void locoDeckGetRangingState_StubWithCallback(CMOCK_locoDeckGetRangingState_CALLBACK Callback);
#define locoDeckSetRangingState_Ignore() locoDeckSetRangingState_CMockIgnore()
void locoDeckSetRangingState_CMockIgnore(void);
#define locoDeckSetRangingState_Expect(newState) locoDeckSetRangingState_CMockExpect(__LINE__, newState)
void locoDeckSetRangingState_CMockExpect(UNITY_LINE_TYPE cmock_line, const uint16_t newState);
typedef void (* CMOCK_locoDeckSetRangingState_CALLBACK)(const uint16_t newState, int cmock_num_calls);
void locoDeckSetRangingState_StubWithCallback(CMOCK_locoDeckSetRangingState_CALLBACK Callback);
#define locoDeckSetRangingState_IgnoreArg_newState() locoDeckSetRangingState_CMockIgnoreArg_newState(__LINE__)
void locoDeckSetRangingState_CMockIgnoreArg_newState(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
