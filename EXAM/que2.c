#include <stdio.h>

void main()
{
    int size;
    printf("Enter the array size :");
    scanf("%d", &size);

    int a[size];

    printf("\n Array Input :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    printf("Output :\n");

    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Smallest Elements in array is :%d", min);
}