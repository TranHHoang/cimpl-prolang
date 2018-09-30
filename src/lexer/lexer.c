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