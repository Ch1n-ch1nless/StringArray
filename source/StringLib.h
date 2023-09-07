#ifndef STRINGLIB_H_INCLUDED
#define STRINGLIB_H_INCLUDED

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <TXLib.h>

char* GetElem(char* text2, const size_t i, const size_t j, const size_t COLS);
char SetElem(char* text2, const size_t i, const size_t j, const size_t COLS, char new_value);
void ReadNumbers(FILE* file_ptr, size_t* ROWS, size_t* COLS);
void ClearBuf(FILE* file_ptr);

#endif // STRINGLIB_H_INCLUDED
