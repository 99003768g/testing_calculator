#include "factorial.h"


error_t find_factorial(int num, long* result)
{
    if(1 == num)
    {
        return num;
    }
    else if (0 > num)
    {
        return NEGATIVE_NUMBER;
    }
    else if (0 == num)
    {
        return ZERO;
    }
    else
    {
        while ( 1 <= num )
        {
            *result *= num--;
        }
        return SUCCESS;
    }
    
}