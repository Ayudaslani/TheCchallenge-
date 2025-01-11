#include <stdio.h>

int factorial(int rem)
{
    int fact = 1;
    for (int i = 1; i <= rem; i++)
    {
        fact *= i;
    }
    return fact;
}
void main()
{
    int num;

    printf("Enter any number :");
    scanf("%d", &num);

    int originalNum = num;

    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        sum += factorial(rem);
        num = num / 10;
    }

    if (sum == originalNum)
    {
        printf("%d is strong number ", originalNum);
    }
    else
    {
        printf("%d is not strong  number ", originalNum);
    }
}