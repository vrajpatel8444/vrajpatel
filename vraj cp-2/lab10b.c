#include<stdio.h>
void main()
{
	int a[100],*p[100],i,n;
	
	printf("enter values\n");
	scanf("%d",&n);
	
	printf("enter ele\n");
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		scanf("%d",p[i]);
	}
	
	printf(" array of ele\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p[i]);
	}
}
