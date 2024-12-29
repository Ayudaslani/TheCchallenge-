#include <stdio.h>
main()
{
    int size;

    printf("Enter the size of array :");
    scanf("%d", &size);

    int a[size];

    printf("\n Array Input :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Array Output :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    // count duplicate element
    //  1 2 3 2 1 3 4
    printf("\n\n");
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = '\0';
            }
            if (a[j] == 0)
            {
                count++;
                printf("%d", a[j]);
            }
            printf("%d total", count);
        }
    }
}