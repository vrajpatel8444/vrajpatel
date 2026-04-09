#include<stdio.h>
int fact
void main()
{
	int n,f=1,i;
	printf("enter number here");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	
	
}
