#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a;
	char *b;
	float *c;
	
	a = (int*) malloc (sizeof(int));
	b = (char*) malloc (sizeof(char));
	c = (float*) malloc (sizeof(float));
	
	if(a == NULL || b == NULL || c == NULL)
	{
		printf("Memory allocation failed\n");
	}
	
	*a=20;
	*b='v';
	*c=2.2;
	
	
	printf("int %d\n",*a);
	printf("char %c\n",*b);
	printf("float %f\n",*c);
	
	free(a);
	free(b);
	free(c);
}
