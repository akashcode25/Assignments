// making a simple calculator using switch case

#include <stdio.h>

void main()
{

    float a,b; 
    char x; 

    printf(" Enter the two numbers respectfully:\n");
    scanf("%f %f", &a, &b);

    printf("\n Enter:\n '+' for ADDITION,\n '-' for SUBSTRACTION\n '*' for MULTIPLICATION\n '/'for Division\n");
    scanf(" %c", &x);

   
    switch(x) 
    {

        case '+' :
        printf("\nADDITION IS: %.6f", a+b);
        break;

        case '-' :
        printf("\nSUBSTRACTION IS: %.6f", a-b);
        break;

        case '*' :
        printf("\nMULTIPLICATION IS: %.6f", a*b);
        break;

        case '/' :
        printf("\nDIVISION IS: %.6f", a/b);
        break;

        default:
        printf("\nEnter valid arguements");

    }
    

}
