#include "bitwise_fun.h"
#include "bitwise_utils.h"
#include <stdio.h>

void bitwiseFunInit()
{
    int n = 016; // Octal(base 8) values start with 0
    printAsBinary(n);

    int x = 0x16; // Hex(base 16) values start with 0x
    printf("hex: 0x16 -> %d\n", x);

    int b = 0b1111;
    printf("binary: 0b1111 -> %d\n", b); // Binary(base 2) values start with 0b

    int a = 128;
    printAsBinary(a);

    int c = 255;
    printf("int: 255 -> binary: %s\n", convertToBinaryString(c));

    printf("---------\n");
    char d = 0b10000000;
    printAsBinary(d);
    printf("char: 0b10000000 -> %d\n", d);
    d = d >> 1;
    printAsBinary(d);
    printf("d >> 1 -> %d\n", d);

    printAsBinary(mask(0b00001111, 0b00001100));
    printAsBinary(flip(0b00001111, 0b11111111)); // to flip bits, we use a number which is all 1
    char c1 = 0b00000111;
    char c2 = 0b11100000;
    char as[9], ab[9], ac[9];
    getBinaryString(as, c1);
    getBinaryString(ab, c2);
    getBinaryString(ac, combineSelection(c1, c2));

    printf("%s %s %s\n", as, ab, ac);
    printf("%p\n", ac);
}
