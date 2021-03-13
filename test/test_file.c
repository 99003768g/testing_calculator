#include "unity.h"
#include "temperature_conversion.h"
#include "calculator_operation.h"
#include "factorial.h"
#include "area.h"
#include "profit_loss.h"
#include "Dec_to_bin.h"
#include "SI.h"
#include "sqrt.h"
#include "volume.h"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_temperature_conversion_f_to_c(void);
void test_temperature_conversion_c_to_f(void);

void test_profit(void);
void test1_profit(void);
void test2_profit(void);
void test3_profit(void);
void test_loss(void);
void test1_loss(void);
void test_dectobin(void);

void test_SI(void);
void test_SI1(void);
void test_sqrt(void);
void test_sqrt1(void);
void test_volume(void);
void test_volume1(void);

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


/* Write all the test functions */ 
void test_profit(void) {
  TEST_ASSERT_EQUAL(180, profit(20, 200));
}
void test1_profit(void) {
  TEST_ASSERT_EQUAL(100, profit(100, 200));
}
void test2_profit(void) {
  TEST_ASSERT_EQUAL(50, profit(50, 100));
}
void test3_profit(void) {
  TEST_ASSERT_EQUAL(10, profit(10, 20));
}
  

void test_loss(void) {
 
  
   TEST_ASSERT_EQUAL(20, loss(100, 80));
}
void test1_loss(void) {
   TEST_ASSERT_EQUAL(20, loss(50, 30));
}

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

void test_dectobin(void)
{
  TEST_ASSERT_EQUAL(1010, dectobin(10));
  TEST_ASSERT_EQUAL(101, dectobin(5));

  TEST_ASSERT_EQUAL(111111, dectobin(63));
  TEST_ASSERT_EQUAL(11101, dectobin(29));

  TEST_ASSERT_EQUAL(1110, dectobin(14));
  TEST_ASSERT_EQUAL(110, dectobin(6));
}

void test_SI(void) 
{
  TEST_ASSERT_EQUAL(24, interest(100, 2, 12));
}
void test_SI1(void) 
{
    TEST_ASSERT_EQUAL(240, interest(1000, 2, 12));
}
void test_sqrt(void) 
{
  TEST_ASSERT_EQUAL(15, square_Root(225));
}
void test_sqrt1(void) 
{
    TEST_ASSERT_EQUAL(31, square_Root(961));
}
void test_volume(void) 
{
  TEST_ASSERT_EQUAL(261.80, volumeofcone(5, 10));
}
void test_volume1(void) 
{
    TEST_ASSERT_EQUAL(718.38, volumeofcone(7, 14));
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

  RUN_TEST(test_profit);
  RUN_TEST(test1_profit);
  RUN_TEST(test2_profit);
  RUN_TEST(test3_profit);
  RUN_TEST(test_loss);
  RUN_TEST(test1_loss);
  RUN_TEST(test_dectobin);

  RUN_TEST(test_SI);
  RUN_TEST(test_SI1);
  RUN_TEST(test_sqrt);
  RUN_TEST(test_sqrt1);
  RUN_TEST(test_volume);
  RUN_TEST(test_volume1);

return UNITY_END();
  
  
}
