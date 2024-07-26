#include <stdio.h>
#include <stdlib.h>
#include "pointer_fun.h"
#include "time_utils.h"

void pointerFunInit()
{
#pragma region timer
    Timer timer;
    timer_start(&timer);

    int d = newInt();
    printf("address of   d: %p\n", &d);

    int f = newStaticInt();
    printf("address of   f: %p\n", &f);

    int g = newInt();
    printf("address of   g: %p\n", &g);

    int h = newStaticInt();
    printf("address of   h: %p\n", &h);

    int *j = newStaticIntP();
    printf("address of j: %p j: %i\n", j, *j);

    timer_stop(&timer);
    double elapsed = timer_elapesed(&timer);
    printf("region timer elapsed: %f\n", elapsed);
#pragma endregion test

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

int *newStaticIntP()
{
    // This memory address lives as long as the program itself
    static int a = 300;
    printf("address of new static(p): %p\n", &a);

    return &a;
}
