#include<stdio.h>
int main()
{
    int units;
    float bill;

    printf("\nEnter number of units consumed: \n");
    scanf("%d", &units);


    switch(units/100)
    {
        case 0:
        bill= 0.5*units;
        break;

        case 1:
        bill= 0.5*units;
        break;
        
        case 2:
        bill= 100 + 0.65*(units-200);
        break;

        case 3:
        bill= 100 + 0.65*(units-200);
        break;

        case 4:
        bill= 230 + 0.80*(units-400);
        break;

        case 5:
        bill= 230 + 0.80*(units-400);
        break;

        default:
        bill=425 + 1.25*(units-600);
    }
    printf("\nYour BILL is = %f", bill);
}
