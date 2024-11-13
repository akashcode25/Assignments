#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void readAndFindLength()
{
    char input[MAX_LENGTH];

    printf("Enter a line of text: ");
    fgets(input, MAX_LENGTH, stdin);

    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n')
    {
        input[length - 1] = '\0';
        length--;
    }

    printf("Length of the input string: %zu\n", length);
}

int main()
{
    readAndFindLength();
    return 0;
}
