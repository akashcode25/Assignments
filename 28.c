#include<stdio.h>
int main()
{
   
    int num,temp,q,sum=0;

    printf("\nEnter number to check ARMSTRONG:\n");
    scanf("%d", &num);

    temp=num;   //assigning input number value to temporary variable

    while(temp!=0)
    {
        q=temp%10; //will separate last digit
        sum+=(q*q*q);
        temp/=10; //will remove last digit 
    }

    if (sum==num)
    printf("ARMSTRONG");
    else 
    printf("NOT ARMSTRONG");

    return 0;

}
