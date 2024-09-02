#include "../../Unity/src/unity.h"
#include "../src/Empty.h"

void setUp (void) {}
void tearDown (void) {}

void test_Three(void) {
	TEST_ASSERT_EQUAL_INT(0, three(1));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_Three);
	return UNITY_END();
}
