
// write a c program to calculate sum of digits of a number.
#include <stdio.h>
void main()
{
    int num, sum;
    printf("Enter any number :");
    scanf("%d", &num);

    sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of Digits :%d ", sum);
}
