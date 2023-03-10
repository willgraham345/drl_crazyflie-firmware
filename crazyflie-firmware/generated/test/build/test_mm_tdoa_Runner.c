/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mm_tdoa.h"
#include "mock_kalman_core.h"
#include "mock_outlierFilter.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testThatScalarUpdateIsCalledInSimpleCase();
extern void testThatSampleWhereDroneIsInSamePositionAsAnchorIsIgnored();
extern void testThatScalarUpdateIsNotCalledWhenTheOutlierFilterIsBlocking();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  mock_kalman_core_Init();
  mock_outlierFilter_Init();
}
static void CMock_Verify(void)
{
  mock_kalman_core_Verify();
  mock_outlierFilter_Verify();
}
static void CMock_Destroy(void)
{
  mock_kalman_core_Destroy();
  mock_outlierFilter_Destroy();
}

/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test/modules/src/kalman_core/test_mm_tdoa.c");
  RUN_TEST(testThatScalarUpdateIsCalledInSimpleCase, 31);
  RUN_TEST(testThatSampleWhereDroneIsInSamePositionAsAnchorIsIgnored, 64);
  RUN_TEST(testThatScalarUpdateIsNotCalledWhenTheOutlierFilterIsBlocking, 87);

  CMock_Guts_MemFreeFinal();
  return suite_teardown(UnityEnd());
}
