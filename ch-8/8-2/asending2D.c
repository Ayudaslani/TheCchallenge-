#include <stdio.h>

main()
{
    int row, col;
    printf("Enter row :");
    scanf("%d", &row);
    printf("Enter col :");
    scanf("%d", &col);

    int a[row][col];

    printf("\n Array input :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 00 01 02   789
    // 10 11 12   456
    // 20 21 22   123
    printf("\n\n Asceding order :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int m = i; m < row; m++)
            {
                for (int n = j; n < col; n++)
                {
                    if (a[i][j] > a[m][n])
                    {
                        int b = a[i][j];
                        a[i][j] = a[m][n];
                        a[m][n] = b;
                    }
                }
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}