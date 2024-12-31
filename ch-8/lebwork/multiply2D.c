#include <stdio.h>

main()
{
    int row, col;

    printf("Enter the matrix of A  Row : ");
    scanf("%d", &row);

    printf("Enter the matrix of A col : ");
    scanf("%d", &col);

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

    printf("\nArray Input :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Enter the matrix of A  Row : ");
    scanf("%d", &row);

    printf("Enter the matrix of A col : ");
    scanf("%d", &col);

    int b[row][col];
    printf("\n\n");
    printf("Array Input :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

        printf("\n");
    }

    printf("\nArray Input :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int c[row][col];

    // 00 01          00 01           (00*00 + 00*10 + 00*20) (01*01 + 01*11 + 01*21) (02*02 + 02*12 + 02*22)
    // 10 11      *    10 11      =

    printf("\n\n");

    printf("multiplication of two matrix :\n");
    c[row][col];

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

        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }
}
