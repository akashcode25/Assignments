// program to calculate power of a number without using math library

#include <stdio.h>
int main()
{
    
    int num,power,result=1;

    printf("\nEnter NUMBER: ");
    scanf("%d", &num);

    printf("\nEnter it's POWER: ");
    scanf("%d", &power);

    for(int i=1; i<=power;i++)
    {
        result *= num;
    }

    printf("\nAnswer is= %d", result);
}
