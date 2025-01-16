#include <stdio.h>

void main()
{
    int size1;
    printf("Enter the size:");
    scanf("%d", &size1);

    int a[size1];
    printf("Array Input Of A : \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    printf("Array Ouput Of A : \n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d", a[i]);
    }
    int size2;
    printf("Enter the size:");
    scanf("%d", &size2);
    int b[size2];
    printf("\n\n");
    printf("Array Input Of B : \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\n");
    printf("Array Ouput Of b : \n");
    for (int i = 0; i < size2; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n\n");
    printf("Common elements : \n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d", a[i]);
                break;
            }
        }
    }
}