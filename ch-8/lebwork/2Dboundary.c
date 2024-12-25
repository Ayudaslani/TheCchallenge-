#include <stdio.h>
main()
{
    int row, col;

    printf("Enter the array row's size :");
    scanf("%d", &row);
    printf("Enter the array col's size :");
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
    }

    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (((i == 0 || i == row - 1 || j == 0 || j == col - 1)))
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}