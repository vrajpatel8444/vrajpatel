#include<stdio.h>
void main()
{
	
	int a,*p;
	p=&a;
	
	printf("enter num:");
	scanf("%d",&a);
	
	printf("value of a=%d\n",a);
	printf("address of a=%u",&a);
	
}
