#include "../../Unity/src/unity.h"
#include "../src/Experiment.h"

Point p;

void setUp (void) {
	extern Point p;
	p.x = 11;
}

void tearDown (void) {}

void test_Point(void) {
	TEST_ASSERT_EQUAL_INT(0, p.x);
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_Point);
	return UNITY_END();
}
