#ifndef XMATH_H
#define XMATH_H
#include <xlang.h>

#define xmin(a, b) ((a) < (b) ? (a) : (b))
#define xmax(a, b) ((a) > (b) ? (a) : (b))

funct xabs(i32_t x) {
    return x < 0 ? -x : x;
}
#endif