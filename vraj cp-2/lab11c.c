#include<stdio.h>

void main()
{
    char str[100];
    char *p;
    int len = 0;

    printf("Enter String: ");
    gets(str);

    p = str;

    while(*p != '\0')
    {
        len++;
        p++;
    }

    printf("Length = %d", len);

    
}
