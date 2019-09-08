#include "../unity/fixture/unity_fixture.h"

int main() {
  printf("test_group_1 tests:\n");
  RUN_TEST_GROUP(test_group_1);
  RUN_TEST_GROUP(test_group_2);
  return 0;
}
