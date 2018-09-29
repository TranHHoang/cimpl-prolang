#ifndef TOKEN_H
#define TOKEN_H
// Atom unit for lexing
typedef enum {
    INT_LITERAL
} TokenType;

typedef struct Token {
    TokenType type;
    int line, col;
    char *value;
} Token;

// Token function prototypes
Token* token_new(TokenType, char*, int, int);
void token_free(Token**);
#endif