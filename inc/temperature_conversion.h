/* 
For temperature conversion
*/
#ifndef __CALCULATOR_TEMPERATURE_CONVERSION_H__
#define __CALCULATOR_TEMPERATURE_CONVERSION_H__

#include <stdio.h>
#include <stdlib.h>

/**
* converts fahrenheit to celsius and returns the result 
* @param[in] input_temperature 
* @return floating value of the conversion
*/
float temperature_conversion_f_to_c(float input_temperature);
float temperature_conversion_c_to_f(float input);

#endif
