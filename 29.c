#include<stdio.h>
int main()
{
    
    int num,temp,q,rev=0;

    printf("\nEnter number to check PALINDROME\n");
    scanf("%d", &num);

    for (temp=num;temp!=0;temp/=10) // temp/=10 for removing last digit one by one
    {
        q=temp%10; //getting last digits one by one 
        rev=(rev*10)+q; //making reverse number
    }

    // checking if number is palindrome or not
    if(rev==num)
    printf("\nPALINDROME");
    else
    printf("\nNOT PALINDROME");

    return 0;
}
