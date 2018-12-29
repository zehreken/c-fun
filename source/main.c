#include "stdio.h"
#include "string.h"

void printAsBinary(int);
char *byteToBinaryString(char);

int main()
{
    int n = 016; // Octal values start with 0
    printAsBinary(n);
    
    int x = 0x16; // Hex values start with 0x
    printf("%d\n", x);
    
    int b = 0b1111;
    printf("%d\n", b); // Binary values start with 0b
    
    int a = 128;
    printAsBinary(a);
    
    int c = 63;
    printf("%s\n", byteToBinaryString(c));
    return 0;
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
