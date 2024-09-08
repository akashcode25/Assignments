#include<stdio.h>
int main()
{
    int num,i;

    printf("\nEnter number to check if it is prime or not.");
    scanf("%d", &num);

    for(i=2; i<num; i++) 
    {
        if (num%2 == 0)
        {
            printf("\nNOT PRIME");
            break; 
        }
        else
        continue;
    }

    if(i==num)
    printf("\nPRIME");

    return 0;
}
