#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__

typedef enum error_t
{
    NEGATIVE_NUMBER = -1,
    ZERO,
    SUCCESS
}error_t;

error_t find_factorial(int num, long* result);

#endif