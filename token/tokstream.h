#ifndef TOKSTREAM_H
#define TOKSTREAM_H
#include "token.h"
#include "../list/vector.h"

typedef struct TokenStream {
    Vector stream;
    int pos;
} TokenStream;

void tokstream_init(TokenStream*);
void tokstream_free(TokenStream*);
#endif