#include <stdio.h>
int sum = 0;
int isperfect(int num)
{

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
void main()
{
    int num;

    printf("Enter any number :");
    scanf("%d", &num);
    isperfect(num);
    if (sum == num)
    {
        printf("%d is perfect number ", num);
    }
    else
    {
        printf("%d is NOT perfect number ", num);
    }
}

