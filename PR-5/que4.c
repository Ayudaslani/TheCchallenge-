#include <stdio.h>

main()
{
    int row, col;
    printf("Enter the array's row size :");
    scanf("%d", &row);
    printf("Enter the array's col size :");
    scanf("%d", &col);

    int a[row][col];
    printf("\n\n");
    printf("Enter  array's Elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Array output :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int r, rSum = 0;
    printf("Enter row :");
    scanf("%d", &r);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == r)
            {
                printf("%d\t", a[i][j]);
                rSum += a[i][j];
            }
        }
    }

    printf("\nRow Sum : %d\n\n", rSum);

    int c, cSum = 0;
    printf("Enter column :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        printf("%d\t", a[i][c]);
        cSum += a[i][c];
    }

    printf("\nColumn Sum : %d\n\n", cSum);
}