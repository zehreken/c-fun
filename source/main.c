#include "stdio.h"
#include "string.h"

void printAsBinary(int);

int main()
{
    int n = 016; // Octal values start with 0
    printAsBinary(n);
    
    int x = 0x16; // Hex values start with 0x
    printf("%d\n", x);
    
    int b = 0b1111;
    printf("%d\n", b); // Binary values start with 0b
    
    int a = 100;
    for (int i = 0; i < 10; i++)
    {
        printf("%u\n", a);
        a = a >> 1;
    }
    return 0;
}

void printAsBinary(int n)
{
    char b[9];
    b[0] = '\0';
    
    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((n & z) == z) ? "1" : "0");
    }
    
    printf("%s\n", b);
}
