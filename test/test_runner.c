#include "../unity/fixture/unity_fixture.h"

TEST_GROUP_RUNNER(test_group_1) {
  RUN_TEST_CASE(test_group_1, test1);
  RUN_TEST_CASE(test_group_1, test2);
}
