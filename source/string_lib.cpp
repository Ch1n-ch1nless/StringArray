#include "StringLib.h"

char* GetElem(char* text2, const size_t i, const size_t j, const size_t COLS)
{
    return (text2 + i * COLS + j);
}

char SetElem(char* text1, const size_t i, const size_t j, const size_t COLS, char new_value)
{
    char old_value = *GetElem(text1, i, j, COLS);
    *GetElem(text1, i, j, COLS) = new_value;
    return old_value;
}

void ClearBuf(FILE* file_ptr)
{
    int c = '\0';
    while (true) {
        c = getc(file_ptr);
        if (c == '\n' || c == EOF) break;
    }
}

void ReadNumbers(FILE* file_ptr, size_t* ROWS, size_t* COLS)
{
    fscanf(file_ptr, "%d", ROWS);
    fscanf(file_ptr, "%d", COLS);
    ClearBuf(file_ptr);
}
