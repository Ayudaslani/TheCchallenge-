#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2, num1 % num2);
    }
}
void main()
{
    int num1, num2;

    printf("Enter the number 1 :");
    scanf("%d", &num1);

    printf("Enter the number 2 :");
    scanf("%d", &num2);

    int res = gcd(num1, num2);
    printf("GCD : %d", res);
}