#include<stdio.h>
 struct employee {
 	
 	int id;
 	char name[50];
 	float salary;
 };
 void main()
  {
 struct employee e;

 
 printf("enter id\n");
 scanf("%d",&e.id);
 printf("enter name\n");
 scanf("%s",&e.name);
 printf("enter salary\n");
 scanf("%f",&e.salary);
 
    printf("ID: %d\n",e.id);
 printf("NAME: %s\n",e.name);
 printf("SALARY: %.2f",e.salary);
}
