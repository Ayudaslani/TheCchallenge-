#include <stdio.h>

void main()
{
    int base, expo;
    printf("Enter the base :");
    scanf("%d", &base);
    printf("Enter the expo :");
    scanf("%d", &expo);

    int power = 1;
    for (int i = 1; i <= expo; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d", base, expo, power);
}