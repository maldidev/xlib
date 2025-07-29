#ifndef XIO_H
#define XIO_H
#include <xlang.h>

funct xputs(const i8_t *str) {
    outtd("%s\n", str);
    return 0;
}

funct xscan_i32(i32_t *num) {
    return scanl("%d", num) == 1 ? 0 : 1;
}
#endif