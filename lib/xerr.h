#ifndef XERR_H
#define XERR_H
#include <xlang.h>

#define xerr(msg) {outtd("Error: %s\n",msg); exit(1);}
#define xerr_if(cond,msg) if(cond) xerr(msg)
#endif