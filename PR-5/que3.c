#include <stdio.h>

main()
{
    int row, col;

    printf("Enter the array's row :");
    scanf("%d", &row);
    printf("Enter the array's col : ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n Enter array's elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // 2 4 1        2 3 8      00 01 02       00   10   20
    // 3 5 4  ==    4 5 2      10 11 12   =   01   11   21
    // 8 2 6        1 4 6      20 21 22       02   12   22

    printf("\n\n");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("%d", a[j][i]);
        }

        printf("\n");
    }
}