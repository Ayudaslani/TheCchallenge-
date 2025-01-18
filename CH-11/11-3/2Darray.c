#include <stdio.h>

void main()
{
    int row, col;
    printf("Enter the row and col size :");
    scanf("%d %d", &row, &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]  =  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int *ptr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr[i][j] = &a[i][j];
        }
    }

    int row1, col2;
    printf("Enter the row and col size :");
    scanf("%d %d", &row1, &col2);

    int b[row1][col2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("b[%d][%d]  =  ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    int *ptr2[row1][col2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            ptr2[i][j] = &b[i][j];
        }
    }

    printf("\n\n");

    int c[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < row; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    int *ptr3[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr3[i][j] = &c[i][j];
        }
    }

    printf("Finally..");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", *ptr3[i][j]);
        }
        printf("\n");
    }
}