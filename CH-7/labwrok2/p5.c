#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        for (int j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int s = 4; s > i; s--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}