#include "../../Unity/src/unity.h"
#include "../src/Tuple.h"

void setUp (void) {}
void tearDown (void) {}

void test_Tuple(void) {
	TEST_ASSERT_EQUAL_INT(0, tuple(1));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_Tuple);
	return UNITY_END();
}
