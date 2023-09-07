#include "StringLib.h"

int main()
{
    size_t ROWS = 0;
    size_t COLS = 0;
    FILE* file_ptr = fopen("array.txt", "r");

    ReadNumbers(file_ptr, &ROWS, &COLS);

    char* text2 = (char*) calloc(ROWS * COLS, sizeof(char));

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            fscanf(file_ptr, "%c", GetElem(text2, i, j, COLS));
        }
        ClearBuf(file_ptr);
    }

    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("%c[%d][%d] ", *GetElem(text2, i, j, COLS), i, j);
        }
        printf("\n");
    }
}
