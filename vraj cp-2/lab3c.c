#include<stdio.h>
void si();
void main()
{
	si();
}
	void si()
{
		float p,r,t,ans;
		
		printf("enter p:");
		scanf("%f",&p);
		printf("enter r:");
		scanf("%f",&r);
		printf("enter t:");
		scanf("%f",&t);
		
		ans=(p*r*t)/100;
		printf("%f",ans);
}
