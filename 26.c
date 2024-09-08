#include<stdio.h>
int main()
{
    int num, even_sum=0, odd_sum=0,i=1;

    printf("\nEnter NUMBER:");
    scanf("%d", &num);

    while(i<=num)
    {
       
        if(i%2 ==0)
        even_sum+=i; 

        
        else
        odd_sum+=i; 
        i++;
    }


    printf("\nSum of ODD numbers: %d\n Sum of EVEN numbers: %d ",odd_sum, even_sum);
    return 0;
}
