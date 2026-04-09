#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    int i, even = 0, odd = 0;

    for(i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);
 
}
