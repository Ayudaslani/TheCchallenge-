#include <stdio.h>
main()
{
    int size;

    printf("Enter the array size :");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n\n");
    printf("1. Insert\n");
    printf("2. fetch\n");
    printf("3. update\n");
    printf("4. delete\n");
    printf("5. exit\n");

    int ch;
    int value, pos;
    printf("Enter your choice :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("how many elements do you want to insert ?");
        scanf("%d", &value);
        printf("which index ?");
        scanf("%d", &pos);

        // 0 1 2 3 4 5
        // 1 2 3 4 6
        // 1 2 3 4 5
        for (int i = pos; i < size; i++)
        {
            a[i + 1] = a[i];
        }
        size++;

        a[pos] = value;
        for (int i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
        break;

    case 2:
        for (int i = 0; i < size; i++)
        {
            printf("%d", a[i]);
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
            printf("%d", a[i]);
        }
        break;

    case 4:
        printf("Enter the index do you want to delete element");
        scanf("%d", &pos);
        for (int i = 0; i < size; i++)
        {
            if (i == pos)
            {
                a[i] = '\0';
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (a[i] != 0)
            {
                printf("%d", a[i]);
            }
        }

        break;
    case 5:
        break;
    }
}
