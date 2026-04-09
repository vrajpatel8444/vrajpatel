#include<stdio.h>
void main()
{

	char str[100];
	char *p;
	
	printf("Enter String: ");
    gets(str);

    p = str;
	
	while(*p !='\0')
	{
		if(*p==a||*p==e||*p==i||*p==o||*p==u||*p==A||*p==E||*p==I||*p==O||*p==U)
			printf(" Vowels");
	}
	
}
