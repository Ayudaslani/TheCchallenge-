#include <stdio.h>
main()
{
    int size;

    printf("Enter the array size :");
    scanf("%d", &size);

    int a[size];
    printf("\n Array Input :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    int ch;
    do
    {
        printf("\n\n");
        printf("1. Insert\n");
        printf("2. fetch\n");
        printf("3. update\n");
        printf("4. delete\n");
        printf("5. exit\n");

        int value, pos;
        printf("Enter your choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:

            printf("Do you want to insert the element  value ?");
            scanf("%d", &value);
            printf("which index ?");
            scanf("%d", &pos);

            for (int i = pos; i < size; i++)
            {
                a[i + 1] = a[i];
            }
            size++;
            a[pos] = value;
            break;

        case 2:
            for (int i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 3:
            printf("Enter element do you want to update ?");
            scanf("%d", &value);
            printf("Enter the index :");
            scanf("%d", &pos);
            a[pos] = value;
            for (int i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 4:
            // printf("Enter the index do you want to delete element");
            // scanf("%d", &pos);
            // for (int i = 0; i < size; i++)
            // {
            //     if (i == pos)
            //     {
            //         a[i] = '\0';
            //     }
            // }
            // for (int i = 0; i < size; i++)
            // {
            //     if (a[i] != 0)
            //     {
            //         printf("%d", a[i]);
            //     }
            // }

            printf("Enter the index do you want to delete the elements ?");
            scanf("%d", &pos);

            for (int i = pos; i < size; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
            for (int i = 0; i < size; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 5:
            break;
        }
    } while (ch != 5);
}
