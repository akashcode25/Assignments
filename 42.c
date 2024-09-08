#include <stdio.h>
#include <stdbool.h> // For boolean type

bool isPrime(int num) {
    // Handle numbers less than 2
    if (num <= 1) {
        return false;
    }
    // 2 and 3 are prime numbers
    if (num <= 3) {
        return true;
    }
    // Eliminate even numbers and multiples of 3
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    // Check for factors from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is prime or composite
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        if (num > 1) {
            printf("%d is a composite number.\n", num);
        } else {
            printf("%d is neither prime nor composite.\n", num);
        }
    }

    return 0;
}
