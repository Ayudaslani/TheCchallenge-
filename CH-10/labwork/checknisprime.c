#include <stdio.h>
#include <math.h>
#include "../10-2/function.c"

int isPrime(int num)
{

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num)
{
    int originalNum, sum, digtis, rem;
    sum = 0;
    originalNum = num;

    digtis = log10(num) + 1;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + round(pow(rem, digtis));
        num = num / 10;
    }
    return (originalNum == sum);
}

void main()
{
    int num;

    printf("Enter any number :");
    num = input();

    if (isPrime(num))
    {
        printf("%d is prime number ", num);
    }
    else
    {
        printf("%d is not prime number", num);
    }

    printf("\n\n");

    if (isArmstrong(num))
    {
        printf("%d is Arnstrong number ", num);
    }
    else
    {
        printf("%d is not  Arnstrong number ", num);
    }
}