#ifndef XBIT_H
#define XBIT_H
#include <xlang.h>

#define xbit_set(var,pos) ((var) |= (1<<(pos)))
#define xbit_clear(var,pos) ((var) &= ~(1<<(pos)))
#define xbit_toggle(var,pos) ((var) ^= (1<<(pos)))
#define xbit_check(var,pos) ((var) & (1<<(pos)))
#endif