#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "bitwise_fun.h"
#include "pointer_fun.h"
#include "float_fun.h"

int main()
{
    printf("pointer fun ================\n");
    pointerFunInit();

    printf("bitwise fun ================\n");
    bitwiseFunInit();

    printf("float fun ==================\n");
    floatFunInit();

    return 0;
}