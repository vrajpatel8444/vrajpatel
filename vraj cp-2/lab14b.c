#include <stdio.h>

void main() {
    FILE *fp;
    char ch;
    int num;

    fp = fopen("demo.txt", "w+");

    fprintf(fp, "Hello %d\n", 123);   
    fputc('A', fp);                  

    rewind(fp);

    fscanf(fp, "%s %d", &ch, &num);  
    printf("Read using fscanf: %c %d\n", ch, num);

    printf("Read using fgetc: ");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    
}
