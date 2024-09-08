//PROGRAM TO REVERSE GIVEN NUMBER

#include<stdio.h>
int main()
{
   
    int num,temp,q,rev=0;

    printf("\nEnter number to check PALINDROME\n");
    scanf("%d", &num);

    for (temp=num;temp!=0;temp/=10) 
    {
        q=temp%10; 
        rev=(rev*10)+q; 
    }
    printf("\nReverse number is: %d", rev);

    return 0;

}
