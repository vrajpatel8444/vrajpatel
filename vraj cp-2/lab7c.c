#include<stdio.h>
#include <string.h>
struct student{
	char name[50];
	int age;
	float per;
};
void main()
{
	struct student s[100],temp;
	int i,n,j;
	
	printf("enter n student data\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		 printf("\nStudent %d\n", i + 1);
		printf("name:");
		scanf("%s",&s[i].name);
		printf("age:");
		scanf("%d",&s[i].age);
		printf("Percentage: ");
        scanf("%f", &s[i].per);
  }      
        for(i=0;i<n-1;i++){
        	for(j=i+1;j<n;j++){
        		if(strcmp(s[i].name,s[j].name)>0){
        			temp=s[i];
        			s[i]=s[j];
        			s[j]=temp;
				}
			}
		}
	
	for(i=0;i<n;i++){
	        printf("\nName: %s\nAge: %d\nPercentage: %f\n",
            s[i].name, s[i].age, s[i].per);
    }           
}
