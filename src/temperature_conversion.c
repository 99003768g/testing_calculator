#include "temperature_conversion.h"

float temperature_conversion_f_to_c(float input)
{
    return ((input - 32) * (5/9));
}
float temperature_conversion_c_to_f(float input)
{
    return ((input * (9/5)) + 32);
}

