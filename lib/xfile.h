/*old code
#ifndef XFILE_H
#define XFILE_H
#include <xlang.h>

funct xfile_read(const i8_t *path, ui8_t **buf, S_t *size) {
    FILE *f = fopen(path, "rb");
    if(!f) return 1;
    fseek(f, 0, SEEK_END);
    *size = ftell(f);
    fseek(f, 0, SEEK_SET);
    *buf = xmalloc(*size);
    fread(*buf, 1, *size, f);
    fclose(f);
    return 0;
}
#endif
*/
#ifndef XFILE_H
#define XFILE_H
#include <xlang.h>
#include "xmem.h"

funct xfile_read(const i8_t* path, ui8_t** buf, S_t* size) {
    FILE* f = fopen(path, "rb");
    if(!f) return 1;
    
    fseek(f, 0, SEEK_END);
    *size = ftell(f);
    fseek(f, 0, SEEK_SET);
    
    if(xmalloc_wrap(*size, (void**)buf)) {
        fclose(f);
        return 1;
    }
    
    if(fread(*buf, 1, *size, f) != *size) {
        xfree(*buf);
        fclose(f);
        return 1;
    }
    
    fclose(f);
    return 0;
}
#endif
