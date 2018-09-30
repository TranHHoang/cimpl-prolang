#ifndef TOKSTREAM_H
#define TOKSTREAM_H
#include "token.h"
#include "../list/vector.h"

typedef struct TokenStream {
    Vector stream;
    int pos;
} TokenStream;

void tokstream_init(TokenStream*);
Token* tokstream_next(TokenStream*);
Token* tokstream_peek(TokenStream*);
Token* tokstream_dpeek(TokenStream*, size_t); // Peek a specific distance
void tokstream_unget(TokenStream*);
void tokstream_append(TokenStream*, Token*);
void tokstream_free(TokenStream*);
#endif