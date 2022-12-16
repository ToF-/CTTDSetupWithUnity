#include "unity_fixture.h"
#include "my_code.h"
TEST_GROUP(my_code);

TEST_SETUP(my_code) {}
TEST_TEAR_DOWN(my_code) {}

TEST(my_code,dummy_test){
    TEST_ASSERT_EQUAL(4, some_function(2));
}
