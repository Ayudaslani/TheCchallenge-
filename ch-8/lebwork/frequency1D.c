#include <stdio.h>

main()
{
    int size;

    printf("Enter the size of array :");
    scanf("%d", &size);

    int a[size], b[size];
    printf("\n Array Input : \n ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Array output : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n");
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {

                a[j] = '\0';
                count++;
            }
        }

        if (a[i] != 0)
        {
            printf("%d is  %d times \n", a[i], count);
        }
    }
}
