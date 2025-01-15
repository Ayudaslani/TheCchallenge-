#include <stdio.h>

void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    int sum = 0;
    int n = num;

    while (num != 0)
    {
        int rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (n == sum)
    {
        printf("%d is armstrong nummber  ", n);
    }
    else
    {
        printf("%d is not  armstrong nummber  ", n);
    }
}