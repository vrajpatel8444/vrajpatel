#include<stdio.h>
void main()
{
	int a,b,*p,*q,temp;
	p=&a;
	q=&b;
	
	printf("enter a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("Befor a=%d and b=%d\n",*p,*q);
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("after a=%d and b=%d",*p,*q);
}
