#include <stdio.h>
#include <stdlib.h>

void main() {
    int *i;
    char *c;
    float *f;

    i = (int*) malloc(sizeof(int));
    c = (char*) malloc(sizeof(char));
    f = (float*) malloc(sizeof(float));

    if(i == NULL || c == NULL || f == NULL) {
        printf("Memory allocation failed\n");
        
    }

    *i = 10;
    *c = 'A';
    *f = 5.5;

    printf("Integer: %d\n", *i);
    printf("Character: %c\n", *c);
    printf("Float: %.2f\n", *f);

    free(i);
    free(c);
    free(f);

    
}
