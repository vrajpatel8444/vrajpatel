#include<stdio.h>
void main()
{
	int a,b,*p,*q,sum=0;
	
	p=&a;
	q=&b;
	
	printf("enter a and b:\n");
	scanf("%d\n",&a);
	scanf("%d",&b);
	
	sum= *p + *q;
	
	printf("sum = %d",sum);
}
