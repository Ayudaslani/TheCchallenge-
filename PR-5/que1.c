#include <stdio.h>

main()
{
    int size, i;
    printf("Enter the array size :");
    scanf("%d", &size);

    int a[size];
    printf("\n");
    printf("Enter array's elements :");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int n = 0;
    printf("\n Negative elements from an array :\n");
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
            n = 1;
        }
    }
    if (!n)
    {
        printf("no negative number in array");
    }
}