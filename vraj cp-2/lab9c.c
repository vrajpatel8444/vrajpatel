#include<stdio.h>
void main()
{
	int a,b,*p1,*p2,sum=0;
	p1=&a;
	p2=&b;
	
	printf("enter a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);
	
	c  = *p1 + *p2;
	
	printf("sum=%d",c);
	
}
