#include<stdio.h>
void main()
{
	int n,rev=0,digit;
	
	printf("enter mumber");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("rev num %d",rev);

}
