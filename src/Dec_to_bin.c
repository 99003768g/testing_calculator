#include "Dec_to_bin.h"
long dectobin(int number) {
    long  binary = 0;
    int reminder, temp = 1;
    while (number != 0) 
    {
        reminder = number % 2;
        number /= 2;
        binary += reminder * temp;
        temp *= 10;
    }
    return binary;
}
