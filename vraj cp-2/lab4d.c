#include <stdio.h>

int reverseNumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverseNumber(num);
    printf("Reversed number = %d\n", rev);

    if (num == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}

