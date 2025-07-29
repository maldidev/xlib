#ifndef XMEM_H
#define XMEM_H
#include <xlang.h>

#define xmalloc(size) mlloc(size)
#define xfree(ptr) do { if(ptr) { free(ptr); (ptr) = null; } } while(0)
#endif