#include<stdio.h>
int swap(int,int);
void main()
{
	int a=5,b=10;

	
	printf("a=%d  b=%d\n",a,b);
	
	
	swap(a,b);
	
	
	printf("a=%d b=%d",a,b);
		
}

int swap (int a,int b )
{
	int temp;
	
		temp = a;
		a=b;
		b=temp;
		
		
}
