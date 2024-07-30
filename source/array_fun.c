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

    int sizeNumbers = sizeof(numbers);
    int sizeInt = sizeof(int);
    int count = sizeNumbers / sizeInt;

    printf("s_n: %d s_i: %d c: %d\n", sizeNumbers, sizeInt, count);
}