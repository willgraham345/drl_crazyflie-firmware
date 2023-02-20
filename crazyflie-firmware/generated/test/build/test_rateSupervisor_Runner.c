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
#include "rateSupervisor.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testThatValidationPassesBeforeEvaluation();
extern void testThatValidationPassesWhenCountIsWithinInterval();
extern void testThatValidationFailesWhenCountIsTooLow();
extern void testThatValidationPassesWhenCountIsTooHigh();
extern void testThatCounterIsResetAtEvaluation();
extern void testThatLatestCountIsStored();
extern void testThatValidationPassesWithSkip();
extern void testThatValidationFailesAfterSkip();


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
  UnityBegin("test/utils/src/test_rateSupervisor.c");
  RUN_TEST(testThatValidationPassesBeforeEvaluation, 49);
  RUN_TEST(testThatValidationPassesWhenCountIsWithinInterval, 58);
  RUN_TEST(testThatValidationFailesWhenCountIsTooLow, 70);
  RUN_TEST(testThatValidationPassesWhenCountIsTooHigh, 80);
  RUN_TEST(testThatCounterIsResetAtEvaluation, 94);
  RUN_TEST(testThatLatestCountIsStored, 110);
  RUN_TEST(testThatValidationPassesWithSkip, 122);
  RUN_TEST(testThatValidationFailesAfterSkip, 134);

  return suite_teardown(UnityEnd());
}