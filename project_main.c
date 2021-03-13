#include "calculator_operation.h"
#include "temperature_conversion.h"
#include "factorial.h"
#include "area.h"
#include "profit_loss.h"
#include "Dec_to_bin.h"
#include "volume.h"
#include "sqrt.h"
#include "SI.h"

int main()
{
    float input;
    int operand1, operand2;
    int costprice;
    int sellingprice;

    double radius;
    long result;
    int num1,num2;

    find_factorial(num1,&result);
    area_circum(radius);
    rect_area(num1,num2);
    square_area(num1);
    triangle_area(num1,num2);

    add(operand1, operand2);
    subtract(operand1, operand2);
    multiply(operand1, operand2);
    divide(operand1, operand2);

    temperature_conversion_f_to_c(input);
    temperature_conversion_c_to_f(input);


    profit(costprice, sellingprice);
    loss(costprice, sellingprice);
    long dectobin(int number);

   float interest(int P,float R, int T); 
   double square_Root (double n);
   float volumeofcone(float a,float b);


}
