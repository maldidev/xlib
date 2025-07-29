#ifndef XVEC_H
#define XVEC_H
#include <xlang.h>
#include "xmem.h"

opendef xvec {
    ui8_t *data;
    S_t size;
    S_t capacity;
};

funct xvec_init(opendef xvec *v, S_t init_size) {
    v->data = xmalloc(init_size);
    if(!v->data) return 1;
    v->size = 0;
    v->capacity = init_size;
    return 0;
}
#endif