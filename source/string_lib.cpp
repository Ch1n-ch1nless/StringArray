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

void ReadNumber(FILE* file_ptr, size_t* numbers_of_strings)
{
    assert(file_ptr != nullptr);
    fscanf(file_ptr, "%d", numbers_of_strings);
    ClearBuf(file_ptr);
}

void ReadArray(FILE* file_ptr, char** data, const size_t number_of_strings)
{
    char buffer[MAXSIZE] = {};
    for (size_t i = 0; i < number_of_strings; i++) {
        fgets(buffer, MAXSIZE, file_ptr);
        *(data + i) = strdup(buffer);
    }
}

void PrintArray(char** data, const size_t numbers_of_strings)
{
    assert(data != nullptr);
    for (size_t i = 0; i < numbers_of_strings; i++) {
        printf("%s", *(data + i));
    }
}

void ClearArray(char** data, const size_t numbers_of_strings)
{
    assert(data != nullptr);
    for (size_t i = 0; i < numbers_of_strings; i++) {
        free(*(data + i));
    }
    free(data);
}
