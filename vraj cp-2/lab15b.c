#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if(a > b)
        printf("Max = %d\n", a);
    else
        printf("Max = %d\n", b);

   
}
