#include "tokstream.h"

void tokstream_init(TokenStream *ts) {
    vector_init(&ts->stream);
    ts->pos = -1;
}

void tokstream_free(TokenStream *ts) {
    vector_free(&ts->stream);
}

Token* tokstream_next(TokenStream *ts) {
    return vector_get(&ts->stream, ts->pos++);
}

Token* tokstream_peek(TokenStream *ts) {
    return vector_get(&ts->stream, ts->pos + 1);
}

Token* tokstream_dpeek(TokenStream *ts, size_t dis) {
    return vector_get(&ts->stream, ts->pos + dis);
}

void tokstream_unget(TokenStream *ts) {
    ts->pos--;
}

void tokstream_append(TokenStream *ts, Token *tok) {
    vector_add(&ts->stream, tok);
}