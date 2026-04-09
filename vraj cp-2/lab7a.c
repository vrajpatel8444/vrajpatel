#include<stdio.h>
struct student{
	char name[50];
	int age;
	float per;
};
void main(){
	struct student s[5];
	int i;
	
	printf("enter 5 student data\n");
	
	for(i=0;i<5;i++)
	{
		 printf("\nStudent %d\n", i + 1);
		printf("name:");
		scanf("%s",&s[i].name);
		printf("age:");
		scanf("%d",&s[i].age);
		printf("Percentage: ");
        scanf("%f", &s[i].per);
	}
	for(i=0;i<5;i++)
	{
		printf("\nName: %s\nAge: %d\nPercentage: %f\n",
               s[i].name, s[i].age, s[i].per);
	}
}
