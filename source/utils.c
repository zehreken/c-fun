#include "utils.h"
#include <stdio.h>

void timer_start(Timer *timer)
{
    timer->start = clock();
}

void timer_stop(Timer *timer)
{
    timer->end = clock();
}

double timer_elapesed(Timer *timer)
{
    return (double)(timer->end - timer->start) / CLOCKS_PER_SEC;
}
