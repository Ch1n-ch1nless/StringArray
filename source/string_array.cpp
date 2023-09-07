#include "StringLib.h"

int main()
{
    size_t number_of_strings = 0;

    FILE* file_ptr = fopen("array.txt", "r");

    ReadNumber(file_ptr, &number_of_strings);

    char** data = (char**) calloc(number_of_strings, sizeof(char*));

    ReadArray(file_ptr, data, number_of_strings);

    PrintArray(data, number_of_strings);

    ClearArray(data, number_of_strings);

    return 0;
}
