#include <stdio.h>
int main()
{
    int T;
    printf("test case: ");
    scanf("%d", &T); //asks user for number of test cases

    while (T--)
    {
        int N, count = 0, M, X;
        printf("Enter num: ");
        scanf("%d", &N); //asks user for the number
        M = N; //stores the number in another variable
        while (N > 0)
        {
            X = N % 10; //finds remainder of the number == the last digit of the number
            if (M % X == 0)
                count++; //if the last  digit of the number exactly divides the whole number then count++
            N = N / 10; //divides by 10, so the last digit gets removed (becoz the number is stored as integer)
        }
        printf("%d\n", count); //prints the number of digits that divide the number exactly
    }
}