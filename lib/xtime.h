#ifndef XTIME_H
#define XTIME_H
#include <xlang.h>
#include <time.h>

funct xsleep(ui32_t sec) {
    return sleep(sec);
}

funct xusleep(ui32_t usec) {
    return usleep(usec);
}
#endif