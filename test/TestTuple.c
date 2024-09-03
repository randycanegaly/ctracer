#include "../../Unity/src/unity.h"
#include "../src/Tuple.h"

struct Tuple test_Point_Tuple;
struct Tuple test_Vector_Tuple;

void setUp (void) {
	//setup a point Tuple for testing
	extern struct Tuple test_Point_Tuple;
	test_Point_Tuple.point = 1.0;
	test_Point_Tuple.x = 3.1416;
	test_Point_Tuple.y = 1.9;
	test_Point_Tuple.z = 0.55;
	
	//setup a vector Tuple for testing
	extern struct Tuple test_Vector_Tuple;
	test_Vector_Tuple.point = 0.0;
	test_Vector_Tuple.x = 5.1416;
	test_Vector_Tuple.y = 5.9;
	test_Vector_Tuple.z = 5.55;
}
void tearDown (void) {}

void test_Tuple_Point(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.0, is_point(test_Point_Tuple));
}

void test_Tuple_Point_X(void) {
	TEST_ASSERT_EQUAL_FLOAT(3.1416, x_coord(test_Point_Tuple));
}

void test_Tuple_Point_Y(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.9, y_coord(test_Point_Tuple));
}

void test_Tuple_Point_Z(void) {
	TEST_ASSERT_EQUAL_FLOAT(0.55, z_coord(test_Point_Tuple));
}

void test_Tuple_Vector(void) {
	TEST_ASSERT_EQUAL_FLOAT(0.0, is_point(test_Vector_Tuple));
}

void test_Tuple_Vector_X(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.1416, x_coord(test_Vector_Tuple));
}
 void test_Tuple_Vector_Y(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.9, y_coord(test_Vector_Tuple));
}

void test_Tuple_Vector_Z(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.55, z_coord(test_Vector_Tuple));
}

int main(void) {
	UNITY_BEGIN();
	
	RUN_TEST(test_Tuple_Point);
	RUN_TEST(test_Tuple_Point_X);
	RUN_TEST(test_Tuple_Point_Y);
	RUN_TEST(test_Tuple_Point_Z);
	
	RUN_TEST(test_Tuple_Vector);
	RUN_TEST(test_Tuple_Vector_X);
	RUN_TEST(test_Tuple_Vector_Y);
	RUN_TEST(test_Tuple_Vector_Z);
	
	return UNITY_END();
}
