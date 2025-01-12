#include <stdio.h>

void input(char *fs, int *a)
{
    scanf(fs, a);
}

void cube(int row, int col, int *ptr[row][col])
{

    printf("cubes of all elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        }
        printf("\n");
    }
}
void main()
{
    int row, col;

    printf("Enter the row  size : ");
    input("%d", &row);
    printf("Enter the col  size : ");
    input("%d", &col);

    int a[row][col];

    printf("\nEnter the array elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            input("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    int *ptr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr[i][j] = &a[i][j];
        }
        printf("\n");
    }

    cube(row, col, ptr);
}