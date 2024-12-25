#include <stdio.h>

main()
{
    int row, col;
    printf("Enter the array's row size :");
    scanf("%d", &row);
    printf("Enter the array's col size :");
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
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("\n\n");
    printf("Average of array : %.2f", (float)sum / (row * col));
}