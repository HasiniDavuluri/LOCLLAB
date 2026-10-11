#ifndef PSTACK_H
#define PSTACK_H
#include <stdint.h>
#include <stdatomic.h>
typedef struct { int value; _Atomic uint32_t next; } pnode_t;
typedef struct {
    pnode_t *nodes;
    _Atomic uint64_t data;
    _Atomic uint64_t freel;
} pstack_t;
void pstack_init(pstack_t *s, uint32_t capacity);
int  pstack_push(pstack_t *s, int v);
int  pstack_pop(pstack_t *s, int *out);
void pstack_destroy(pstack_t *s);
#endif

