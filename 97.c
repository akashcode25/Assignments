#include <stdio.h>

int main()
{
    char str[100];
    char *ptr = str;
    int vowelCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr)
    {
        char ch = *ptr; // Get the current character
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++; // Increment count if it's a vowel
        }
        ptr++; // Move to the next character
    }

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
