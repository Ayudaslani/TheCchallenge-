#include <stdio.h>

main()
{
    int size;

    printf("Enter size :");
    scanf("%d", &size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    // int n = size - 1;
    // for (int i = 0; i < size / 2; i++, n--)
    // {
    //     int c = a[i];
    //     a[i] = a[n];
    //     a[n] = c;
    // }

    printf("\n\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}