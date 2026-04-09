
#include<stdio.h>
void main()
{
	int a[100],i,n,*p[100];
		
	printf("enter num\n");
	scanf("%d",&n);
	
	
	 printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		scanf("%d",p[i]);	
	}
	
	 printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
			printf("%d\n",*p[i]);
	}
}
