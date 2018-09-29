#ifndef VECTOR_H
#define VECTOR_H

#define size_t unsigned long long
#define VECTOR_DEFAULT_CAPACITY 2
#define VECTOR_GROWTH_FACTOR 2
// Simple dynamic array for storing lots of things
typedef struct {
    size_t size;
    size_t capacity;
    void **data;
} Vector;

void vector_init(Vector*);
size_t vector_size(Vector*);
void* vector_get(Vector*, size_t);
void vector_set(Vector*, size_t, void*);
void vector_add(Vector*, void*);
void* vector_last(Vector*);
void vector_free(Vector*);
#endif