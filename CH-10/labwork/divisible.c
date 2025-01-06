#include <stdio.h>

void divisible();
void main()
{
    divisible();
}

void divisible()
{
    int n;
    printf("Enter the any number :");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }
}