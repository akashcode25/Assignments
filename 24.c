#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x,y;

    printf("\nEnter x, n respectively:\n");
    scanf("%f%d",&x,&n);

    switch(n)
    {
        case 1:
        y= 1+x;
        break;

        case 2:
        y= 1+ (float)(x/n) ; 
        
        case 3:
        y= 1 + pow(x,n);
        break;

        default:
        y= 1+ n*x;
    }
    
    printf("\nValue of y: %f" , y);
    return 0;
}
