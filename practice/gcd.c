#include <stdio.h>

void main()
{
    int num1, num2, temp, gcd;
    printf("Enter any two numbers : ");
    scanf("%d %d", &num1, &num2);



    while (num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;
    printf("HCF of : %d ", gcd);
}