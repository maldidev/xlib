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