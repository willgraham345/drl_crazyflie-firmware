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
#include "kve/kve_storage.h"
#include <string.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testThatWriteItemDoesWriteTheItemAtTheRightAddress();
extern void testThatWriteHoleDoesWriteAHoleAtTheRightAddress();
extern void testThatWriteEndDoesWriteTheEndAtTheRightAddress();
extern void testThatMoveMemoryDoesMoveAnItem();
extern void testThatFindItemByKeyFindsAnItem();
extern void testThatFindItemByKeyDoNotFindAnItemWhenSearchingAfterIt();
extern void testThatFindItemByPrefixFindsAnItem();
extern void testThatFindItemByPrefixFindsNextItem();
extern void testThatFindEndFindsTheEnd();
extern void testThatFindEndReturnInvalidAddressIfNoEnd();
extern void testThatFindNextItemFindsTheNextItem();
extern void testThatFindNextItemReturnInvalidAddressIfNoMoreItem();
extern void testThatFindNextItemJumpsOverHoles();


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
  UnityBegin("test/utils/src/kve/test_kve_storage.c");
  RUN_TEST(testThatWriteItemDoesWriteTheItemAtTheRightAddress, 57);
  RUN_TEST(testThatWriteHoleDoesWriteAHoleAtTheRightAddress, 76);
  RUN_TEST(testThatWriteEndDoesWriteTheEndAtTheRightAddress, 95);
  RUN_TEST(testThatMoveMemoryDoesMoveAnItem, 113);
  RUN_TEST(testThatFindItemByKeyFindsAnItem, 133);
  RUN_TEST(testThatFindItemByKeyDoNotFindAnItemWhenSearchingAfterIt, 148);
  RUN_TEST(testThatFindItemByPrefixFindsAnItem, 165);
  RUN_TEST(testThatFindItemByPrefixFindsNextItem, 185);
  RUN_TEST(testThatFindEndFindsTheEnd, 208);
  RUN_TEST(testThatFindEndReturnInvalidAddressIfNoEnd, 225);
  RUN_TEST(testThatFindNextItemFindsTheNextItem, 240);
  RUN_TEST(testThatFindNextItemReturnInvalidAddressIfNoMoreItem, 257);
  RUN_TEST(testThatFindNextItemJumpsOverHoles, 274);

  return suite_teardown(UnityEnd());
}
