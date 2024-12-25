#include <stdio.h>
main()
{
    int size;

    printf("Enter array elements :");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Array input :\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n\n");
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    printf("%d  positive \n", pos);
    printf("%d  negative \n", neg);
}