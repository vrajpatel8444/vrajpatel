#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    int i, sum = 0;

    for(i = 1; i <= 5; i++) {
        sum += atoi(argv[i]);
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);

   
}
