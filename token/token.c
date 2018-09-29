#include "token.h"
#include <string.h>

Token* token_new(TokenType type, char *value, int line, int col) {
    Token *tok = malloc(sizeof(Token));
    tok->type = type;
    tok->value = strdup(value);
    tok->line = line;
    tok->col = col;
}

void token_free(Token **tok) {
    if (*tok) {
        free((*tok)->value);
        free(*tok);
        *tok = NULL;
    }
}