#include <stdio.h>

int ispalindrom(int *num)
{
    int originalNum = *num;
    int rev = 0;
    while (originalNum != 0)
    {
        int rem = originalNum % 10;
        rev = (rev * 10) + rem;
        originalNum /= 10;
    }

    return (rev == *num);
}
void main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);

    if (ispalindrom(&num))
    {
        printf("%d is palindrom number ", num);
    }
    else
    {
        printf("%d is not  palindrom number ", num);
    }
}
