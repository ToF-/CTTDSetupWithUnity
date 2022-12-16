#include "unity_fixture.h"
#include "unity.h"
#include "unity_memory.h"
#include "stdlib.h"
#include "my_code.h"
TEST_GROUP(my_code);

int *an_int;

TEST_SETUP(my_code) {
    UnityMalloc_StartTest();
    an_int = (int *)malloc(sizeof(int));
}

TEST_TEAR_DOWN(my_code) {
    free(an_int);
    UnityMalloc_EndTest();
}

TEST(my_code,dummy_test){
    *an_int = 2;
    TEST_ASSERT_EQUAL(4, some_function(*an_int));
}
