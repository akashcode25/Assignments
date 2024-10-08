#include<stdio.h>
int main()
{
    float d,h,m,s;
    s=31558150;
    printf("Time in seconds=31558150\n");
    
    m=(s)/60;
    h=(m)/60;
    d=(h)/24;
    printf("Time in minutes= %f Time in hours= %f Time in Days= %f",m,h,d);
}
