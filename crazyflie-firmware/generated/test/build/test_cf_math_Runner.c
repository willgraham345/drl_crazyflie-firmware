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
#include "cf_math.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testThatClip1ReturnsValueInRange();
extern void testThatClip1Returns1ForLargeValues();
extern void testThatClip1ReturnsMinus1ForNegativeLargeValues();
extern void testThatLimPosReturnsValueInRange();
extern void testThatLimPosReturnsZeroForNegativeValues();


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
  UnityBegin("test/utils/src/test_cf_math.c");
  RUN_TEST(testThatClip1ReturnsValueInRange, 5);
  RUN_TEST(testThatClip1Returns1ForLargeValues, 16);
  RUN_TEST(testThatClip1ReturnsMinus1ForNegativeLargeValues, 27);
  RUN_TEST(testThatLimPosReturnsValueInRange, 38);
  RUN_TEST(testThatLimPosReturnsZeroForNegativeValues, 49);

  return suite_teardown(UnityEnd());
}