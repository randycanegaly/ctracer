#include "../../Unity/src/unity.h"
#include "../src/Tuple.h"

struct Tuple test_Tuple;

void setUp (void) {
	//setup on Tuple for testing
	extern struct Tuple test_Tuple;
	test_Tuple.point = 1;
}
void tearDown (void) {}

void test_Tuple_Type(void) {
	TEST_ASSERT_EQUAL_INT(0, is_point(test_Tuple));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_Tuple_Type);
	return UNITY_END();
}
