#include <stdio.h>

main()
{
    int row, col;

    printf("Enter the row & column  size :");
    scanf("%d %d", &row, &col);

    int a[row][col];

    printf("\n\n");
    printf("Array Input :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int num;
    printf("Enter the number of arrray multiplication : ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = num * a[i][j];
        }
    }
    printf("\n Scalar Multiplication\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}