#include<stdio.h>
struct student{
	char name[50];
	int age;
	float per;
};
void main()
{
	int i,n,max=0;
	
	printf("enter n student data\n");
	scanf("%d",&n);
		
	
	struct student s[n];
	
	
	for(i=0;i<n;i++)
	{
		 printf("\nStudent %d\n", i + 1);
		printf("name:");
		scanf("%s",&s[i].name);
		printf("age:");
		scanf("%d",&s[i].age);
		printf("Percentage: ");
        scanf("%f", &s[i].per);
        
        if(s[i].per > s[max].per)
        {
        	max = i;
		}
	}
	printf("\nName: %s\nAge: %d\nPercentage: %f\n",
               s[max].name, s[max].age, s[max].per);
}
