/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "clockCorrectionEngine.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testGetClockCorrection();
extern void testCalculateClockCorrectionWithValidInputDataWithoutWrapAround();
extern void testCalculateClockCorrectionWithValidInputDataWithWrapAround();
extern void testCalculateClockCorrectionWithInvalidInputData();
extern void testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheSpecs();
extern void testUpdateClockCorrectionWithSampleInTheInnerLimitOfTheSpecsWithEmptyBucket();
extern void testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheAcceptableNoiseWithEmptyBucket();
extern void testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheAcceptableNoiseWithNonEmptyBucket();
extern void testUpdateClockCorrectionWithSampleInTheInnerLimitOfTheAcceptableNoise();


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
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test/utils/src/test_clock_correction.c");
  RUN_TEST(testGetClockCorrection, 19);
  RUN_TEST(testCalculateClockCorrectionWithValidInputDataWithoutWrapAround, 35);
  RUN_TEST(testCalculateClockCorrectionWithValidInputDataWithWrapAround, 54);
  RUN_TEST(testCalculateClockCorrectionWithInvalidInputData, 77);
  RUN_TEST(testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheSpecs, 94);
  RUN_TEST(testUpdateClockCorrectionWithSampleInTheInnerLimitOfTheSpecsWithEmptyBucket, 116);
  RUN_TEST(testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheAcceptableNoiseWithEmptyBucket, 138);
  RUN_TEST(testUpdateClockCorrectionWithSampleInTheOuterLimitOfTheAcceptableNoiseWithNonEmptyBucket, 160);
  RUN_TEST(testUpdateClockCorrectionWithSampleInTheInnerLimitOfTheAcceptableNoise, 182);

  return suite_teardown(UnityEnd());
}