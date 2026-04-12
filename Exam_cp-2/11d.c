#include<stdio.h>
void main()
{
	int str1[100],str2[100];
	int *p,*q;
	
	
	p=&str1;
	q=&str2;
	
	printf("enter string:");
	gets(str1);
	
	while(*p != '\0')
	{
		*q=*p;
		q++;
		p++;
	}
	*q != '\0';
	
	printf("copy string: %s",str2);
}
