#include <stdio.h>
main()
{
    int row, col;
    printf("Enter row & col :");
    scanf("%d %d", &row, &col);

    int a[row][col];

    printf("\n Array Input ..\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i] == a[j])
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf(" sum of diagonal elements : %d", sum);
}
