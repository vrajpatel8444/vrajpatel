#include<stdio.h>
void main()
{
	int a1[5],*p,i;
	int a2[5],*q;
	
	p=&a1;
	q=&a2;
	
	for(i=0;i<5;i++)
	{
		printf("enter a1\n");
		scanf("%d",&a1[i]);
		*(q+i)=*(p+i); 
	}
	
	for(i=0;i<5;i++)
	{
		printf("array = %d\n",a2[i]);
	}
}
