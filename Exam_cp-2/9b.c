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
	
	printf("enter int,float,char,double\n");
	scanf("%d\n",&a);
	scanf("%f\n",&b);
	scanf("%c\n",&c);
	scanf("%lf",&d);
	
	
	printf("value of int=%d\n",a);
	printf("value of float=%f\n",b);
	printf("value of char=%c\n",c);
	printf("value of double=%lf\n",d);
	
	printf("address of int=%u\n",&a);
	printf("address of float=%u\n",&b);
	printf("address of char=%u\n",&c);
	printf("address of double=%u",&d);
	
	
}
