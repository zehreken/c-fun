#include <stdio.h>
#include <stdlib.h>
#include "pointerFun.h"

int newInt();
int newStaticInt();

void pointerFun_init()
{
    int d = newInt();
    printf("address of d: %p\n", &d);
    
    int f = newStaticInt();
    printf("address of f: %p\n", &f);
    
    for (int i = 0; i < 10; i++)
    {
        int l = i;
        malloc(10);
        printf("address of l: %p\n", &l);
    }
    
    int g = newInt();
    printf("address of g: %p\n", &g);
    
    int h = newStaticInt();
    printf("address of h: %p\n", &h);
    
    return;
    int a = 100;
    printf("a: %d\n", a);
    int *p_a = &a;
    printf("address of a: %p\n", p_a);
    *p_a = 20;
    printf("a: %d\n", a);
    printf("value of p_a: %d\n", *p_a);
    
    int b = 200;
    p_a = &b;
    printf("address of b: %p\n", p_a);
    
    printf("\n\nstatic----------\n");
    static int c = 100;
    int *p_c = &c;
    printf("c: %d\n", c);
    printf("p_c: %p\n", p_c);
}

int newInt()
{
    int a = 100;
    printf("address of new: %p\n", &a);
    
    return a++;
}

int newStaticInt()
{
    static int a = 200;
    printf("address of new static: %p\n", &a);
    
    return a++;
}
