#include<stdio.h>
void main()
{
	int a,*p;
	float b,*q;
	char c,*r;
	double d,*z;
	
	p=&a;
	q=&b;
	r=&c;
	z=&d;
	
	printf("enter a,b,c,d\n");
	scanf("%d\n",&a);
	scanf("%f\n",&b);
	scanf("%c\n",&c);
	scanf("%lf",&d);
	
	printf("value of a=%d\n",a);
	printf("value of b=%f\n",b);
	printf("value of c=%c\n",c);
	printf("value of d=%lf\n",d);
	
	printf("adderess of a=%u\n",&a);
	printf("adderess of b=%u\n",&b);
	printf("adderess of c=%u\n",&c);
	printf("adderess of d=%u",&d);
	
	
}
