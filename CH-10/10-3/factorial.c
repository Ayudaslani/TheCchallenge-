#include <stdio.h>

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
void main()
{
    int num;

    printf("Enter any number :");
    scanf("%d", &num);

    int res = fact(num);
    printf("Factorial : %d", res);
}