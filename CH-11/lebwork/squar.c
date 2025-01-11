#include <stdio.h>

void main()
{
    int size;
    printf("Enter the Array's size :");
    scanf("%d", &size);

    int a[size];
    int *ptr[size];

    printf("\nEnter array's elements : \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }
    printf("\n");
    printf("Square of each elements  :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", (*ptr[i]) * (*ptr[i]));
    }
}