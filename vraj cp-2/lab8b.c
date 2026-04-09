#include<stdio.h>
union Player{
	
	char p_name[100];
	char team[100];
	int score;
	float avg;
};
void main()
{
union Player p[3];
int i;

for(i=0;i<3;i++)
{
	printf("\nEnter details for Player %d\n", i+1);
		printf("enter p_name\n ");
		scanf("%s",&p[i].p_name);
		printf("Name: %s\n",p[i].p_name);
		
		printf("enter team\n ");
		scanf("%s",&p[i].team);
		 printf("team: %s\n",p[i].team);
		 
		 printf("enter score\n ");
		 scanf("%d",&p[i].score);
		 printf("score: %d\n",p[i].score);
		 
		 printf("enter avg\n");
		 scanf("%f",&p[i].avg);
		 printf("avg: %f\n",p[i].avg);
}
}
