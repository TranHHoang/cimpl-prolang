#include "lexer.h"

void lexer_init(Lexer *lexer, char *path) {
    lexer->file = fopen(path, "r");
    tokstream_init(&lexer->tokStream);
    lexer->line = lexer->col = 0;
}

void lexer_free(Lexer *lexer) {
    fclose(lexer->file);
    tokstream_free(&lexer->tokStream);
}

char lexer_next(Lexer *lexer) {
    lexer->col++;
    return fgetc(lexer->file);
}

char lexer_peek(Lexer *lexer) {
    char c = fgetc(lexer->file);
    ungetc(c, lexer->file);
    return c;
}

void lexer_unget(Lexer *lexer, char c) {
    lexer->col--;
    ungetc(c, lexer->file);
}

Token* lexer_parseIdent(Lexer *lexer) {
    char c;
    
}