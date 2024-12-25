#include <stdio.h>
main()
{
    int row, col;
    printf("Enter the array's row size :");
    scanf("%d", &row);
    printf("Enter the array's col size :");
    scanf("%d", &col);

    int a[row][col];

    printf("\n");
    printf("Enter array's elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");
    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is  : %d", max);
}