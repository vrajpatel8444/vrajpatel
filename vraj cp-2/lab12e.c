#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
};

void main() {
    struct student *s;

    s = (struct student*) malloc(sizeof(struct student));

    if(s == NULL) {
        printf("Memory allocation failed\n");
        
    }

    printf("Enter ID: ");
    scanf("%d", &s->id);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);

    free(s);
    
}
