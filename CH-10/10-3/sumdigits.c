#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10 + sumOfDigits(n / 10));
    }
}
void main()
{
    int n;
    printf("Enter any number :");
    scanf("%d", &n);

    int res = sumOfDigits(n);
    printf("sum of Digits : %d", res);
}