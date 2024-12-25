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
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d  even \n", even);
    printf("%d  odd \n", odd);
}