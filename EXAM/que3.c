#include <stdio.h>
#include "function.c"

void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int result = reverseNumber(num, 0);
    printf("Reverse number is: %d", result);
}