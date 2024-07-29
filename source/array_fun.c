#include <stdio.h>
#include "array_fun.h"

void arrayFunInit()
{
    const int length = 5;
    int numbers[length] = {10, 21, 32, 43, 54};
    for (int i = 0; i < length; i++)
    {
        printf("i: %d m: %d\n", i, numbers[i]);
    }
}