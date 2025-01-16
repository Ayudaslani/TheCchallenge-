#include <stdio.h>

int sumofNum(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    else
    {
        return num + sumofNum(num - 1);
    }
}

void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);

    int res = sumofNum(num);
    printf("%d ", res);
}