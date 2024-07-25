#ifndef TIME_UTILS_H
#define TIME_UTILS_H

#include <time.h>

typedef struct
{
    clock_t start;
    clock_t end;
} Timer;

void timer_start(Timer *timer);
void timer_stop(Timer *timer);
double timer_elapesed(Timer *timer);

#endif