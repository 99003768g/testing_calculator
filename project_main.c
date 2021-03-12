#include "calculator_operation.h"
#include "temperature_conversion.h"

int main()
{
    float input;
    int operand1, operand2;

    add(operand1, operand2);
    subtract(operand1, operand2);
    multiply(operand1, operand2);
    divide(operand1, operand2);

    temperature_conversion_f_to_c(input);
    temperature_conversion_c_to_f(input);


    return 0;
}