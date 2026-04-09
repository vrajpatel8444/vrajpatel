#include<stdio.h>
void main()
{
	char str[100],rev_str[100];
	int i=0,j=0,len=0;
	
	printf("enter str :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=len-1;i>=0;i--)
	{
		rev_str[j++]=str[i];
	}
		rev_str[j]!='\0';
		
		printf("rev str :");
		puts(rev_str);
}
