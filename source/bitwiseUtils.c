#include "bitwiseUtils.h"
#include <stdio.h>
#include <string.h>

void printAsBinary(char n)
{
    char b[9];
    b[0] = '\0';
    
    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((n & z) == z) ? "1" : "0");
    }
    
    printf("char: %d -> binary: %s\n", n, b);
}

char *byteToBinaryString(char n)
{
    static char b[9];
    b[0] = '\0';
    
    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((n & z ) == z) ? "1" : "0");
    }
    
    return b;
}

char mask(char a, char mask)
{
//    printAsBinary(a & mask);
    return a & mask;
}

void flip(char a, char b)
{
    printAsBinary(a ^ b);
}

void combineSelection(char a, char b)
{
    printAsBinary(a | b);
}
