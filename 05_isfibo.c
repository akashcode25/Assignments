#include <stdio.h>
#include <math.h>
int main()
{
    long long int t;

    t = pow(10, 5);

    long long int a[t], i, j;

    long long int x = 0, y = 1, s;

    for (j = 1; j < t; j++) //counts fibonacci series till 10^5  and stores it in an array
    {
        a[j] = x;
        s = x + y;
        x = y;
        y = s;
    }

    long long int n;
    printf("Enter N = ");
    scanf("%lld", &n);

    for (i = 0; i < t; i++)
    {
        if (a[i] == n)
        {
            printf("%lld isFibo\n", n);
            break;
        }
    }

    if (i == t)
    {
        printf("%lld isNotFibo\n", n);
    }

    return 0;
}