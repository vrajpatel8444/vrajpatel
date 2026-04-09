#include <stdio.h>

struct book {
    char title[30];
    char author[30];
    char publication[30];
    float price;
};
void main()
{
	struct book b1,b2,b3;
	
	printf("BOOK 1\n");
	printf("enetr title\n");
	scanf("%s",&b1.title);
	printf("enetr author\n");
	scanf("%s",&b1.author);
	printf("enetr publication\n");
	scanf("%s",&b1.publication);
	printf("enetr price\n");
	scanf("%f",&b1.price);
	
	printf("BOOK 2\n");
	printf("enetr title\n");
	scanf("%s",&b2.title);
	printf("enetr author\n");
	scanf("%s",&b2.author);
	printf("enetr publication\n");
	scanf("%s",&b2.publication);
	printf("enetr price\n");
	scanf("%f",&b2.price);
	
	printf("BOOK 3");
	printf("enetr title\n");
	scanf("%s",&b3.title);
	printf("enetr author\n");
	scanf("%s",&b3.author);
	printf("enetr publication\n");
	scanf("%s",&b3.publication);
	printf("enetr price\n");
	scanf("%f",&b3.price);
	
	printf("BOOK 1 \n");
	printf("%s\n",b1.title);
	printf("%s\n",b1.author);
	printf("%s\n",b1.publication);
	printf("%f\n",b1.price);
	printf("BOOK 2\n");
	printf("%s\n",b2.title);
	printf("%s\n",b2.author);
	printf("%s\n",b2.publication);
	printf("%f\n",b2.price);
	printf("BOOK 3\n");
	printf("%s\n",b3.title);
	printf("%s\n",b3.author);
	printf("%s\n",b3.publication);
	printf("%f\n",b3.price);
}
