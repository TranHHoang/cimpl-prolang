#include "tokstream.h"

void tokstream_init(TokenStream *ts) {
    ts->pos = -1;
    vector_init(&ts->stream);
}

void tokstream_free(TokenStream *ts) {
    vector_free(&ts->stream);
}