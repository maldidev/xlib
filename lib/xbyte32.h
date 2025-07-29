#include <xlang.h>
#ifndef B32_H
#define B32_H

#include <stdint.h>

#define B32_LO(x) ((x) & 0xFF)
#define B32_HI(x) (((x) >> 8) & 0xFF)
#define B32_XHI(x) (((x) >> 16) & 0xFF)
#define B32_MSB(x) (((x) >> 24) & 0xFF)

static inline ui32_t B32_PACK(ui8_t a, ui8_t b, ui8_t c, ui8_t d) {
    return ((ui32_t)a << 24) | ((ui32_t)b << 16) | ((ui32_t)c << 8) | d;
}

static inline ui32_t B32_SWAP(ui32_t x) {
    return ((x << 24) & 0xFF000000) |
           ((x << 8)  & 0x00FF0000) |
           ((x >> 8)  & 0x0000FF00) |
           ((x >> 24) & 0x000000FF);
}

static inline ui32_t B32_ROTL(ui32_t x, ui8_t n) {
    return (x << n) | (x >> (32 - n));
}

static inline ui32_t B32_ROTR(ui32_t x, ui8_t n) {
    return (x >> n) | (x << (32 - n));
}

#endif