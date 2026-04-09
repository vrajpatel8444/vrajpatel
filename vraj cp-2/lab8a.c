#include<stdio.h>
struct Player{
	char p_name[100];
	char team[100];
	int score;
	float avg;
};
void main()
{
	struct Player p[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter details for Player %d\n", i+1);
		printf("enter p_name ");
		scanf("%s",&p[i].p_name);
		printf("enter team ");
		scanf("%s",&p[i].team);
		printf("enter score ");
		scanf("%d",&p[i].score);
		printf("enter avg ");
		scanf("%f",&p[i].avg);
	}
	for(i=0;i<3;i++)
	{
		 printf("\nName: %s\nTeam: %s\nScore: %d\nAverage: %.2f\n",
               p[i].p_name, p[i].team, p[i].score, p[i].avg);
	}
}
