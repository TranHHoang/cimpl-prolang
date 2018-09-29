#include "vector.h"
#include <stdlib.h>

void vector_init(Vector *v) {
    v->size = 0;
    v->capacity = VECTOR_DEFAULT_CAPACITY;
    v->data = malloc(sizeof(void*) * v->capacity);
}

size_t vector_size(Vector *v) {
    return v->size;
}

void* vector_get(Vector *v, size_t pos) {
    if (pos < v->size) return v->data[pos];
    return NULL;
}

void vector_set(Vector *v, size_t pos, void *dat) {
    if (pos < v->size) {
        v->data[pos] = dat;
    }
}

bool vector_resize(Vector *v, size_t newSize) {
    void **bufArr = realloc(v->data, newSize);
    if (bufArr) {
        v->data = bufArr;
        v->capacity = newSize;
        return true;
    }
    return false;
}

bool vector_add(Vector *v, void *dat) {
    if (v->size == v->capacity) {
        if (!vector_resize(v, v->capacity * VECTOR_GROWTH_FACTOR)) {
            return false;
        }
    }
    v->data[v->size++] = dat;
    return true;
}

void* vector_last(Vector *v) {
    return v && v->data ? v->data[v->size - 1] : NULL;
}

void vector_free(Vector *v) {
    if (v->data) free(v->data);
    v->data = NULL;
}