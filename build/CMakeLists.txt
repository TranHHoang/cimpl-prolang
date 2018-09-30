cmake_minimum_required (VERSION 3.0)
project (CProLang C)

set(CMAKE_CXX_COMPILER gcc)
set(CMAKE_C_FLAGS "-std=c11")
set(SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/main/main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/list/vector.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/token/token.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/token/tokstream.c
)

set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/list/vector.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/token/token.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/token/tokstream.h
)

add_executable(main.out ${SRCS} ${HEADERS})