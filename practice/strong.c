#include <stdio.h>

void main()
{
    int num, originalNum, rem;
    int sum = 0;

    printf("Enter any number :");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0)
    {

        rem = num % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == originalNum)
    {
        printf("%d is strong number  ", originalNum);
    }
    else
    {
        printf("%d is not strong number  ", originalNum);
    }
}