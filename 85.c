#include <stdio.h>
#include <ctype.h> // For the tolower function


int isVowel(char ch) {
   
    ch = tolower(ch);
    
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar); 
    if (isVowel(inputChar)) {
        printf("%c is a vowel.\n", inputChar);
    } else {
        printf("%c is not a vowel.\n", inputChar);
    }

    return 0;
}
