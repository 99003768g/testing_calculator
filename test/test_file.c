#include "unity.h"
#include "temperature_conversion.h"
#include "calculator_operation.h"
#include "factorial.h"
#include "area.h"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_temperature_conversion_f_to_c(void);
void test_temperature_conversion_c_to_f(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


/* Write all the test functions */ 

/////// Ankit
void test_factorial_positive_num(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
    TEST_ASSERT_EQUAL(3628800, result);
}
void test_factorial_negative_num(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
}

void test_positive_area_square()
{
    TEST_ASSERT_EQUAL(100, square_area(10));
}
 void test_Negative_area_square()
{
     TEST_ASSERT_EQUAL(144, square_area(-12));
}
 void test_positive_rect_area()
{
   TEST_ASSERT_EQUAL(200, rect_area(10,20));
}
void test_Negative_rect_area()
{
    TEST_ASSERT_EQUAL(-120, rect_area(-12,10));
}
void test_positive_triangle_area()
{
     TEST_ASSERT_EQUAL(100, triangle_area(10,20));
}
void test_Negative_triangle_area()
{
   TEST_ASSERT_EQUAL(-60, triangle_area(-12,10));
}

/////////////  ankit


void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-20, add(10, -30));
  TEST_ASSERT_EQUAL(0, add(10, -10));
  TEST_ASSERT_EQUAL(-300, add(600, -900));
  TEST_ASSERT_EQUAL(9000, add(4500, 4500));
  TEST_ASSERT_EQUAL(500, add(250, 250));
  TEST_ASSERT_EQUAL(750, add(700, 50));
  TEST_ASSERT_EQUAL(0, add(125, -125));
  TEST_ASSERT_EQUAL(-10, add(-5, -5));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(150, add(75, 75));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  TEST_ASSERT_EQUAL(2, subtract(3, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(400, subtract(1000, 600));
}
 
void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}
 
void test_divide(void) {
  TEST_ASSERT_EQUAL(1.0, divide(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.0, divide(2, 2));
}


void test_temperature_conversion_f_to_c(void) {
  TEST_ASSERT_EQUAL(0, temperature_conversion_f_to_c(257));
}


void test_temperature_conversion_c_to_f(void) {
  TEST_ASSERT_EQUAL(32, temperature_conversion_c_to_f(0));
  TEST_ASSERT_EQUAL(82, temperature_conversion_c_to_f(50));
  TEST_ASSERT_EQUAL(132, temperature_conversion_c_to_f(100));
}


int main(void)
{
  int operand1,operand2;


/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

    /* Run Test functions  addded by vijay*/
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);


  RUN_TEST(test_temperature_conversion_f_to_c);
  RUN_TEST(test_temperature_conversion_c_to_f);

  RUN_TEST(test_factorial_positive_num);
  RUN_TEST(test_positive_area_square);
  RUN_TEST(test_positive_rect_area);
  RUN_TEST(test_positive_triangle_area);
  RUN_TEST(test_Negative_area_square);
  RUN_TEST(test_Negative_rect_area);
  RUN_TEST(test_Negative_triangle_area);

return UNITY_END();
  
  
}
