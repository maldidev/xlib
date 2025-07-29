#ifndef XSTR_H
#define XSTR_H
#include <xlang.h>

funct xstrlen(const i8_t *s) {
    S_t len = 0;
    while(s[len]) len++;
    return len;
}

funct xstrcpy(i8_t *dst, const i8_t *src) {
    while((*dst++ = *src++));
    return 0;
}
#endif