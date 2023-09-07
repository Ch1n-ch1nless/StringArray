#include "StringLib.h"

int main()
{
    const size_t size = 7;

    FILE* file_ptr = fopen("array.txt", "r");

    char* data[size] = {};

    char buffer[MAXSIZE] = {};

    ReadArray(file_ptr, data, size, buffer);

    PrintArray(data, size);
    return 0;
}
