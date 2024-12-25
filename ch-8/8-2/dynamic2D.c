#include <stdio.h>
main()
{
    int row,col;

    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the col :");
    scanf("%d",&col);

    int a[row][col];

    printf("\n\n Array Input :");
    for(int i=0; i <row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n\n");
    }

    printf("\n\n Array Output :\n");
    for(int i=0; i< row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    


}