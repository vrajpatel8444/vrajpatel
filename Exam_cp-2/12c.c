#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,sum=0;
	int *a;
	
	printf("enter num\n");
	scanf("%d",&n);
	
	a = (int*) calloc (n , sizeof(int));
	
	if(a == NULL)
	{
		printf("Memory allocation failed\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter num:\n");
		scanf("%d",&a[i]);
		sum = sum + a[i]; 
	}
	
	printf("sum = %d\n",sum);
	
	free(a);
}
