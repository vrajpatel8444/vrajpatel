#include<stdio.h>
void main()
{
	int i=0;
	char str[100],len=0;
	
	printf("enter num");
	gets(str);
	puts(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
}
