#include <stdio.h>
int main()
{
    float sales, commision;
    printf("\nEnter your sales:\n");
    scanf("%f", &sales);

    if(sales <= 500)
   { 
        commision= (5.0/100)*sales;     
        printf("Your COMMISION is: Rs.%.3f", commision);
   }
    else if(sales>500 && sales <= 2000)
    {
        commision= 35 + (10.0/100)*(sales-500);
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else if(sales>2000 && sales<=5000)
    {
        commision= 185 + (12.0/100)*(sales-2000);
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else if(sales>5000)
    {
        commision= (12.5/100)*sales;
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else
    {    
      printf("\nEnter valid sales");
    }
    return 0;
}
