#include <stdio.h>
#include <string.h>

struct Player {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main() {
    int n, i, j;
    struct Player p[100], temp;

    printf("Enter number of players: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nPlayer %d\n", i+1);
        scanf("%s %s %d %f", p[i].p_name, p[i].team, &p[i].score, &p[i].average);
    }

    
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(p[i].score < p[j].score) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nHighest Score: %d (%s)\n", p[0].score, p[0].p_name);

    
    for(i = 0; i < 3 && i < n; i++) {
        printf("%s - %d\n", p[i].p_name, p[i].score);
    }

    
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strcmp(p[i].p_name, p[j].p_name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    
    for(i = 0; i < n; i++) {
        printf("%s %s %d %.2f\n",
               p[i].p_name, p[i].team, p[i].score, p[i].average);
    }

    
}

