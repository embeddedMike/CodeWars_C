#include "../inc/ProductionCode.h"
#include "../unity/fixture/unity_fixture.h"
#include "unity.h"

TEST_GROUP(test_group_1);

TEST_SETUP(test_group_1) { /* Setup before every test */
}
TEST_TEAR_DOWN(test_group_1) { /* Cleanup after every test */
}

TEST(test_group_1, test1) {
  int32_t val;
  val = AverageThreeBytes(70, 80, 90);
  TEST_ASSERT_EQUAL(0, val);
}

TEST(test_group_1, test2) { TEST_FAIL_MESSAGE("Implement your test!"); }

TEST(test_group_1, test_reverse_words) {
  char* result;
  TEST_FAIL_MESSAGE("Implement your test bejbe!");
}
