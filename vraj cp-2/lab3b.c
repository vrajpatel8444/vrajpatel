#include<stdio.h>
int max(int a, int b);

int main() {
    int a, b, result;

    printf("Enter two numbers:\n");
    
    scanf("%d %d", &a, &b);

    
    result = max(a, b);

    
    printf("Max: %d\n", result);

}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
