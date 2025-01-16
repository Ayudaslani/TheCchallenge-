#include <stdio.h>

void main()
{
    int num, isprime = 1;

    printf("Enter the number :");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1 && num > 1)
    {
        printf("%d is prime number ", num);
    }
    else
    {
        printf("%d is not  prime number ", num);
    }
}
