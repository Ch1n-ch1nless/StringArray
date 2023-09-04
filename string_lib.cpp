#include "StringLib.h"

char* GetElem(char* text1, const size_t i, const size_t j)
{
    return (text1 + i * COLS + j);
}

char SetElem(char* text1, const size_t i, const size_t j, char new_value)
{
    char old_value = *GetElem(text1, i, j);
    *GetElem(text1, i, j) = new_value;
    return old_value;
}
