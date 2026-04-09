#include<stdio.h>
void main()
{

int a[100],*p[100],n,i;	

	printf("enter n\n");
	scanf("%d",&n);
	
	printf("enter ele\n");
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		scanf("%d",p[i]);
	}
	
	 printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		if(*p[i]>0)
		
			printf("%d positive\n",*p[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		if(*p[i]<0)
		
			printf("%d negative\n",*p[i]);
		
	}
}
