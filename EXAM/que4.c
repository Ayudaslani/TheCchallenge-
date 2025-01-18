#include <stdio.h>

void main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("\n Array Input : \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int *ptr[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }
    printf("\n\n");
    printf("Output :\n");
    printf("Square of Each Elements :\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", (*ptr[i]) * (*ptr[i]));
    }
}