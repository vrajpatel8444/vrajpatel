#include <stdio.h>

void main() {
    FILE *fp;

    fp = fopen("test.txt", "w");  
    if (fp == NULL) {
        printf("File not created\n");
        
    }

    printf("File created successfully\n");

    fclose(fp);  
    
}
