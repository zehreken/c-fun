#include "float_fun.h"
#include <stdio.h>

void floatFunInit()
{
    unsigned int binaryRep = 0b11110001100000111000000000000000;
    float f1;
    *((unsigned int *)&f1) = binaryRep;

    printf("bR: %d\n", binaryRep);
    printf("f1: %f\n", f1);
}