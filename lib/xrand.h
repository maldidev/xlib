#ifndef XRAND_H
#define XRAND_H
#include <xlang.h>
#include <stdlib.h>

#define xrand() rand()
#define xsrand(seed) srand(seed)

funct xrand_range(i32_t min, i32_t max) {
    return min + xrand() % (max-min+1);
}
#endif