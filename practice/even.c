#include <stdio.h>

void main()
{
    int num, first;
    printf("Enter the any number :");
    scanf("%d", &num);

    int lastdigit = num % 10;

    first = num;
    while (num >= 10)
    {
        num /= 10;
    }
    first = num;
    int sum = lastdigit + first;

    printf("first : %d", sum);
}
