#include <stdio.h>

void main()
{
    int size;

    printf("Enter the size :");
    scanf("%d", &size);

    int a[size];

    printf("Array input : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n\n");
    printf("Array Out put :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                printf("%d", a[i]);
            }
        }
    }
}
