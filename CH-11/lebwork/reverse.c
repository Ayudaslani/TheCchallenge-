#include <stdio.h>

void main()
{
    int size;
    printf("Enter the size:");
    scanf("%d", &size);

    int a[size];
    int *ptr[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    int n = size - 1;
    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = a[i];
        a[i] = a[n];
        a[n] = c;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *ptr[i]);
    }
}