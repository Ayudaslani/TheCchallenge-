// prime number between 1 to n.
#include <stdio.h>

void main()
{
    int end, isprime;

    printf("Enter the end :");
    scanf("%d", &end);

    for (int i = 1; i <= end; i++)
    {
        isprime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            printf("%d ", i);
        }
    }
}