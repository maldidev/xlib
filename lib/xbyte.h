#ifndef BYTE_H
#define BYTE_H

#include <stdint.h>
#include <stddef.h>
#include <xlang.h>

#define BYTE_BITS 8
#define BYTE_MASK 0xFF

static inline ui8_t byte_get(ui64_t val, S_t pos) {
    return (val >> (pos * BYTE_BITS)) & BYTE_MASK;
}

static inline ui64_t byte_set(ui64_t val, S_t pos, ui8_t byte) {
    ui64_t mask = ~((ui64_t)BYTE_MASK << (pos * BYTE_BITS));
    return (val & mask) | ((ui64_t)byte << (pos * BYTE_BITS));
}

static inline ui16_t swap16(ui16_t x) {
    return (x << 8) | (x >> 8);
}

static inline ui32_t swap32(ui32_t x) {
    return ((x << 24) & 0xFF000000) |
           ((x <<  8) & 0x00FF0000) |
           ((x >>  8) & 0x0000FF00) |
           ((x >> 24) & 0x000000FF);
}

static inline ui64_t swap64(ui64_t x) {
    return ((x << 56) & 0xFF00000000000000ULL) |
           ((x << 40) & 0x00FF000000000000ULL) |
           ((x << 24) & 0x0000FF0000000000ULL) |
           ((x <<  8) & 0x000000FF00000000ULL) |
           ((x >>  8) & 0x00000000FF000000ULL) |
           ((x >> 24) & 0x0000000000FF0000ULL) |
           ((x >> 40) & 0x000000000000FF00ULL) |
           ((x >> 56) & 0x00000000000000FFULL);
}

#endif