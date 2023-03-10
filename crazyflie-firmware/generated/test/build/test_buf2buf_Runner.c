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
#include "buf2buf.h"
#include <string.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testThatASmallInBufferIsNotFillingLargeOutBuffer();
extern void testThatEqualSizeInAndOutBufferFillsOutBuffer();
extern void testThatALargeInBufferFillsSmallerOutBuffer();
extern void testThatMultipleSmallInBufferFillsOutBuffer();
extern void testThatOutBufferWithDataReportsSizeWhenReleased();
extern void testStdUseCaseWithVariousConfigurations();


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
  UnityBegin("test/utils/src/test_buf2buf.c");
  RUN_TEST(testThatASmallInBufferIsNotFillingLargeOutBuffer, 56);
  RUN_TEST(testThatEqualSizeInAndOutBufferFillsOutBuffer, 68);
  RUN_TEST(testThatALargeInBufferFillsSmallerOutBuffer, 80);
  RUN_TEST(testThatMultipleSmallInBufferFillsOutBuffer, 92);
  RUN_TEST(testThatOutBufferWithDataReportsSizeWhenReleased, 108);
  RUN_TEST(testStdUseCaseWithVariousConfigurations, 125);

  return suite_teardown(UnityEnd());
}
