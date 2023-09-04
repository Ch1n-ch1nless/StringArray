#ifndef STRINGLIB_H_INCLUDED
#define STRINGLIB_H_INCLUDED

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <TXLib.h>

const size_t ROWS = 9;
const size_t COLS = 6;

char* GetElem(char* text1, const size_t i, const size_t j);
char SetElem(char* text1, const size_t i, const size_t j, char new_value);

#endif // STRINGLIB_H_INCLUDED
