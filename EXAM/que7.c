#include <stdio.h>

//patten program
void main()
{
    for (int i = 10; i >= 6; i--)
    {
        for (int j = i; j <= 10; j++)
        {
            printf("%d ", i * i);
        }
        printf("\n");
    }
}