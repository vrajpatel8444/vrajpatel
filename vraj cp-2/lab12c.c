#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed\n");
        
    }

    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    free(arr);
    
}
