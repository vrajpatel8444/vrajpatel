#include<stdio.h>
#include<string.h>
struct Player{
	char p_name[100];
	char team[100];
	int score;
	float avg;
};
void main()
{
	struct Player p[100],temp;
	int i,j,n;
	
	printf("enter n\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
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
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(p[i].p_name,p[j].p_name)>0){
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
			}
		}
		
		for(i=0;i<n;i++)
	{
		 printf("\nName: %s\nTeam: %s\nScore: %d\nAverage: %.2f\n",
               p[i].p_name, p[i].team, p[i].score, p[i].avg);
	}
	
}
