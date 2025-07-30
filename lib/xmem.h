#ifndef XMEM_H
#define XMEM_H
#include <xlang.h>

#define xmalloc(size) malloc(size)
#define xfree(ptr) do { if(ptr) { free(ptr); (ptr) = NULL; } } while(0)

funct xmalloc_wrap(S_t size, void** result) {
    *result = malloc(size);
    return *result ? 0 : 1;
}
#endif
