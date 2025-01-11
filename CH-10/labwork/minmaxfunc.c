#include <stdio.h>

int max(int max1, int min1)
{
    if (max1 >= min1)
    {
        return max1;
    }
}
int min(int max1, int min1)
{
    if (max1 > min1)
    {
        return min1;
    }
}
int main()
{
    int max1, min1;
    printf("Enter any number :");
    scanf("%d", &max1);

    printf("Enter any number :");
    scanf("%d", &min1);

    int maximum = max(max1, min1);
    int minimum = min(max1, min1);

    printf("%d is max number \n", maximum);
    printf("%d is min number \n", minimum);
}