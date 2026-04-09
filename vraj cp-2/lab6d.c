#include<stdio.h>

struct employee{
	 int id;
	 char n;
};
struct person{
	int age;
	char n;
	struct employee
};
void main()
{

struct employee e,p;
	
	printf("enter id\n");
	scanf("%d",&e.id);
	printf("enter n\n");
	scanf("%s",&e.n);
	
	printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    
    printf("enter age\n");
	scanf("%d",&e.p.age);
	printf("enter n\n");
	scanf("%s",&e.p.n);
}
