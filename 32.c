#include <stdio.h>
#include <limits.h> 

void findMaxAndSecondMax(int arr[], int n, int *max, int *secondMax) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }

    *max = INT_MIN;       
    *secondMax = INT_MIN; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > *max) {
            *secondMax = *max; 
            *max = arr[i];    
        } else if (arr[i] > *secondMax && arr[i] != *max) {
            *secondMax = arr[i]; 
        }
    }

    if (*secondMax == INT_MIN) {
        printf("There is no second maximum value.\n");


    
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The number of elements must be at least 2.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, secondMax;
    findMaxAndSecondMax(arr, n, &max, &secondMax);

    printf("Maximum value: %d\n", max);
    printf("Second maximum value: %d\n", secondMax);

    return 0;
}
