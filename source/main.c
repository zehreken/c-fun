#include "stdio.h"
#include "string.h"

void printAsBinary(char);
char *byteToBinaryString(char);
void mask(char, char);
void flip(char, char);
void combineSelection(char, char);

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
    
    printf("---------\n");
    char d = 0b10000000;
    printAsBinary(d);
    printf("%d\n", d);
    d = d >> 1;
    printAsBinary(d);
    printf("%d\n", d);
    
    mask(0b00001111, 0b00001100);
    flip(0b00001111, 0b11111111); // to flip bits, we use a number which is all 1
    combineSelection(0b00001111, 0b11100000);
    
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

void printAsBinary(char n)
{
    char b[9];
    b[0] = '\0';
    
    for (int z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((n & z) == z) ? "1" : "0");
    }
    
    printf("%s\n", b);
}

void mask(char a, char mask)
{
    printAsBinary(a & mask);
}

void flip(char a, char b)
{
    printAsBinary(a ^ b);
}

void combineSelection(char a, char b)
{
    printAsBinary(a | b);
}
