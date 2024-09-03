#include "../../Unity/src/unity.h"
#include "../src/Tuple.h"

struct Tuple test_Tuple;

void setUp (void) {
	//setup on Tuple for testing
	extern struct Tuple test_Tuple;
	test_Tuple.point = 1.0;
	test_Tuple.x = 3.1416;
}
void tearDown (void) {}

void test_Tuple_Type(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.0, is_point(test_Tuple));
}

void test_Tuple_X(void) {
	TEST_ASSERT_EQUAL_FLOAT(3.1416, x_coord(test_Tuple));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_Tuple_Type);
	RUN_TEST(test_Tuple_X);
	return UNITY_END();
}
