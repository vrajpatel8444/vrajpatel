#include<stdio.h>
void main()
{
	int a[100],*p[100],n,i,sum=0;
	
	printf("enter num");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		scanf("%d",p[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+*p[i];
	}
	printf("sum=%d\n",sum);
	printf("avg=%d",sum/2);
	
}
