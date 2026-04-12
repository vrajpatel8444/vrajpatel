#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	int *a;
	
	printf("enter num:");
	scanf("%d",&n);
	
	a = (int*) malloc (n * sizeof(int));
	
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("printf elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("enter new size:");
	scanf("%d",&n);
	
	
	a = (int*) realloc (a, n* sizeof(int));
	
	printf("Enter new elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	 printf("Updated array:\n");
	 for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	free(a);
	
}
