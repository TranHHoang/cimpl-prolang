#ifndef LEXER_H
#define LEXER_H
#include <stdio.h>
#include "../token/tokstream.h"

typedef struct Lexer {
    FILE *file;
    TokenStream tokStream;
    size_t line, col;
} Lexer;

void lexer_init(Lexer*, char*);
void lexer_free(Lexer*);
void lexer_tokenize(Lexer*);

#endif