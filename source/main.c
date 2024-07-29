#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "bitwise_fun.h"
#include "pointer_fun.h"
#include "float_fun.h"
#include "array_fun.h"

int main()
{
    printf("pointer fun ================\n");
    pointerFunInit();

    printf("bitwise fun ================\n");
    bitwiseFunInit();

    printf("float fun ==================\n");
    floatFunInit();

    printf("array fun ==================\n");
    arrayFunInit();

    return 0;
}