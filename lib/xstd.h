#ifndef STD_H
#define STD_H

#include <stdarg.h>
#include <stddef.h>
#include <xlang.h>

typedef struct {
    int _fd;
    int _flags;
    char* _ptr;
    int _cnt;
    char* _base;
} FILE;

#define EOF (-1)

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

FILE* fopen(const char* path, const char* mode);
funct fclose(FILE* fp);
funct fflush(FILE* fp);

S_t fread(void* ptr, S_t size, S_t nmemb, FILE* fp);
S_t fwrite(const void* ptr, S_t size, S_t nmemb, FILE* fp);

funct fgetc(FILE* fp);
funct getc(FILE* fp);
funct getchar(void);
funct ungetc(int c, FILE* fp);

funct fputc(int c, FILE* fp);
funct putc(int c, FILE* fp);
funct putchar(int c);

char* fgets(char* s, int size, FILE* fp);
funct fputs(const char* s, FILE* fp);

funct printf(const char* format, ...);
funct fprintf(FILE* fp, const char* format, ...);
funct sprintf(char* s, const char* format, ...);
funct snprintf(char* s, S_t n, const char* format, ...);

funct vprintf(const char* format, va_list ap);
funct vfprintf(FILE* fp, const char* format, va_list ap);
funct vsprintf(char* s, const char* format, va_list ap);
funct vsnprintf(char* s, S_t n, const char* format, va_list ap);

funct feof(FILE* fp);
funct ferror(FILE* fp);
void clearerr(FILE* fp);

funct remove(const char* path);
funct rename(const char* old, const char* new);

#endif