#ifndef XCRYPT_H
#define XCRYPT_H
#include <xlang.h>

funct xxor_crypt(ui8_t *data, S_t len, ui8_t key) {
    for(S_t i=0; i<len; i++) data[i] ^= key;
    return 0;
}
#endif