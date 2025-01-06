#include <stdio.h>

main()
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

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    int max = 0;
    int smax;
    int tmax;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            tmax = smax;
            smax = max;
            max = a[i];
        }
    }
    printf("\n\n");

    printf("Second largest Elements : %d\n", smax);
    printf("Third largest Elements : %d", tmax);
}