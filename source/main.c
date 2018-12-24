#include "stdio.h"

int main()
{
    int n = 016; // Octal values start with 0
    printf("%d\n", n);
    
    int x = 0x16; // Hex values start with 0x
    printf("%d\n", x);
    
    int b = 0b1111;
    printf("%d\n", b); // Binary values start with 0b
    return 0;
}
