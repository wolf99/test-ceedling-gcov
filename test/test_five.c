#include "unity.h"
#include "five.h"

void setUp(void) { }

void tearDown(void) { }

void test_gimme_five_should_give_me_five(void)
{
	TEST_ASSERT_EQUAL_INT(5, gimme_five());
}