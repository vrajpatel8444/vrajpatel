#include <stdio.h>
#include <stdlib.h>

void main() {
    int *arr, n, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n * sizeof(int));

    printf("Enter new elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    
}
