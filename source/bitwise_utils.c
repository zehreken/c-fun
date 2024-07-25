#include "bitwise_utils.h"
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

void getBinaryString(char *buffer, char n)
{
    buffer[0] = '\0';

    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(buffer, ((n & z) == z) ? "1" : "0");
    }
}

char *convertToBinaryString(char n)
{
    static char b[9];
    b[0] = '\0';

    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((n & z) == z) ? "1" : "0");
    }

    return b;
}

char mask(char a, char mask)
{
    return a & mask;
}

char flip(char a, char b)
{
    return a ^ b;
}

char combineSelection(char a, char b)
{
    return a | b;
}
