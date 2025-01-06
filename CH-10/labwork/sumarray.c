#include <stdio.h>

int sum();
main()
{
    int result = sum();
    printf("Array of sum : %d", result);
}

int sum()
{
    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}