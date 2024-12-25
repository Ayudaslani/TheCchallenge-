#include <stdio.h>

main()
{
    int size;
    printf("Enter array size ::");
    scanf("%d", &size);

    int a[size];
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d is max ", max);
    printf("%d is min ", min);
}