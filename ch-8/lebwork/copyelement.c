#include <stdio.h>
main()
{
    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    int copy[size], dest[size];

    printf("\n Array Input :\n");
    for (int i = 0; i < size; i++)
    {
        printf("copy[%d] = ", i);
        scanf("%d", &copy[i]);
    }

    printf("\n Array output :\n");
    for (int i = 0; i < size; i++)
    {
        dest[i] = copy[i];
    }

    printf("\n Array old  :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", copy[i]);
    }

    printf("\n Array new  :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", dest[i]);
    }
}