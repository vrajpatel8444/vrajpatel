#include <stdio.h>

int isPrime(n) {
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}
