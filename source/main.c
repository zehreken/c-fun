#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "bitwiseUtils.h"
#include "pointerFun.h"

bool startSDL();
void quitSDL();

int main()
{
    pointerFun_init();
    
    return 0;
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
    char* as = convertToBinaryString(c1);
    char* ab = convertToBinaryString(c2);
    char* ac = "test";
    char* ad = ac;
    printf("%s %s %s\n", as, ab, ac);
    printf("%d %d\n", ac, ad);
    
    return 0;
}

bool startSDL()
{
    bool success = true;
    
    // Init SDL here
    
    return success;
}

void quitSDL()
{
    
}
