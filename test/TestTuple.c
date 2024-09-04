#include "../../Unity/src/unity.h"
#include "../src/Tuple.h"

Tuple test_Point_Tuple;
Tuple test_Vector_Tuple;
Tuple factory_Point;
Tuple factory_Vector;

void setUp (void) {
	//setup a.w Tuple for testing
	extern Tuple test_Point_Tuple;
	test_Point_Tuple.w = 1.0;
	test_Point_Tuple.x = 3.1416;
	test_Point_Tuple.y = 1.9;
	test_Point_Tuple.z = 0.55;
	
	//setup a vector Tuple for testing
	extern Tuple test_Vector_Tuple;
	test_Vector_Tuple.w = 0.0;
	test_Vector_Tuple.x = 5.1416;
	test_Vector_Tuple.y = 5.9;
	test_Vector_Tuple.z = 5.55;

	//create a.w Tuple with factory method for test
	extern Tuple factory_Point;
	Point(&factory_Point, 1, 2, 3);
	
	//create a vector Tuple with factory method for test
	extern Tuple factory_Vector;
	Vector(&factory_Vector, 4, 5, 6);

}
void tearDown (void) {}

void test_Tuple_Point(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.0, test_Point_Tuple.w);
}

void test_Tuple_Point_X(void) {
	TEST_ASSERT_EQUAL_FLOAT(3.1416, test_Point_Tuple.x);
}

void test_Tuple_Point_Y(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.9, test_Point_Tuple.y);
}

void test_Tuple_Point_Z(void) {
	TEST_ASSERT_EQUAL_FLOAT(0.55, test_Point_Tuple.z);
}

void test_Tuple_Vector(void) {
	TEST_ASSERT_EQUAL_FLOAT(0.0, test_Vector_Tuple.w);
}

void test_Tuple_Vector_X(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.1416, test_Vector_Tuple.x);
}
 void test_Tuple_Vector_Y(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.9, test_Vector_Tuple.y);
}

void test_Tuple_Vector_Z(void) {
	TEST_ASSERT_EQUAL_FLOAT(5.55, test_Vector_Tuple.z);
}

void test_Point(void) {
	TEST_ASSERT_EQUAL_FLOAT(1.0, factory_Point.w);
}

void test_Vector(void) {
	TEST_ASSERT_EQUAL_FLOAT(0.0, factory_Vector.w);
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
	
	RUN_TEST(test_Point);
	RUN_TEST(test_Vector);
	
	return UNITY_END();
}
