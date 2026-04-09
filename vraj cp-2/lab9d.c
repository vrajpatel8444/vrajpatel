#include<stdio.h>
void main()
{
	int a1[5];
	int a2[5],i;

	
	int*p=a1;
	int *q=a2;
	
	for(i=0;i<5;i++)
	{
		printf("enter a1:");
		scanf("%d",a1);
		 *(q+a2)=*(p+a1);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",a2[i]);
	}
	
}
