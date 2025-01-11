#include <stdio.h>

void main()
{
    int size;
    printf("Enter the array's size :");
    scanf("%d", &size);

    int a[size];
    printf("Enter the array elements :\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int *ptr1[size];
    int **ptr2[size];

    for (int i = 0; i < size; i++)
    {
        ptr1[i] = &a[i];
    }

    for (int i = 0; i < size; i++)
    {
        ptr2[i] = &ptr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        **ptr2[i] = (*ptr1[i]) * (*ptr1[i]);
    }
    int n = size - 1;
    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = **ptr2[i];
        **ptr2[i] = a[n];
        a[n] = c;
    }

    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", **ptr2[i]);
    }
}
