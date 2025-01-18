#include <stdio.h>


int isarm(int *num)
{
    int originalNum = *num;
    int sum = 0;
    while (originalNum != 0)
    {
        int rem = originalNum % 10;
        sum = sum + (rem * rem * rem);
        originalNum = originalNum / 10;
    }
    return (*num == sum);
}

void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    if (isarm(&num))
    {
        printf("%d is armstrong nummber  ", num);
    }
    else
    {
        printf("%d is not  armstrong nummber  ", num);
    }
}