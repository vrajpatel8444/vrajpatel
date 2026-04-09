#include<stdio.h>
void main()
{
	int num,i=2;
	printf("enter a num");
	scanf("%d",&num);
	int count =0;
	do{
		if(num%i==0){
			count++;
		}
		i++;
	}
	while(i<num/2);
		if(count==0)
		printf("%d is prime\n",num);
		else
		printf("%d is not prime\n",num);
		
	}





