#include<stdio.h>
void main()
{
	int a,*p;
	p=&a;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("value of a=%d\n",a);
	printf("adderess of a=%u",&a);
}
