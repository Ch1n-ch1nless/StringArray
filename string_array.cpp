#include "StringLib.h"

int main()
{
    char text1[ROWS][COLS] = {
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'},
                              {'\0', '\0', '\0', '\0', '\0', '\0'}
                              };
    FILE* file_ptr = fopen("array.txt", "r");
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            char new_value = '\0';
            fscanf(file_ptr, "%c", &new_value);
            SetElem(text1[0], i, j, new_value);
        }
        int c = '\0';
        c = getc(file_ptr);
    }
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("%c (%d) ", *GetElem(text1[0], i, j), (int) *GetElem(text1[0], i, j));
        }
        printf("\n");
    }
}
