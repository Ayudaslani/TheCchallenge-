#include <stdio.h>

main()
{
    int size;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    printf("Array Output : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    int index;
    int n, m;

    printf("\nEnter  the index :");
    scanf("%d", &index);
    // 0 1 2 3 4
    // 0 1
    // 1 2 3 4 0

    for (int i = 0; i < index; i++)
    {

        for (int j = 0; j < size; j++)
        {

            a[j] = a[j + 1];
        }
        int n = a[0];

        a[size - 1] = n;
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}