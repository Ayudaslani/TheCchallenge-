#include <stdio.h>
#include <math.h>
int base, expo;

int power(int base, int expo)
{
    if (base < 0 && expo < 0)
    {
        return 1;
    }
    else
    {
        return pow(base, expo);
    }
}
void main()
{
    printf("Enter the base :");
    scanf("%d", &base);

    printf("Enter the expo :");
    scanf("%d", &expo);

    int res = power(base, expo);
    printf("power of number : %d", res);
}