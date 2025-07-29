#ifndef XLIST_H
#define XLIST_H
#include <xlang.h>

opendef xnode {
    void *data;
    opendef xnode *next;
};

funct xlist_add(opendef xnode **head, void *data) {
    opendef xnode *new = xmalloc(sizeof(opendef xnode));
    new->data = data;
    new->next = *head;
    *head = new;
    return 0;
}
#endif