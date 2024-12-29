#include <stdio.h>
main()
{
    int row, col;
    printf("Enter the array's row :");
    scanf("%d", &row);

    printf("Enter the array's  col:");
    scanf("%d", &col);

    int a[row][col];
    int b[row][col];
    printf("\nArray Input : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");
    printf("Array Output : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    // 00 01 02
    // 10 11 12
    // 20 21 22
    int issymmetric = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != a[j][i])
            {
                issymmetric = 0;
                break;
            }
        }
        printf("\n");
        // if (!issymmetric)
        //     break;
    }

    if (issymmetric)
    {
        printf("yes");
    }
    else
    {
        printf("not");
    }
}