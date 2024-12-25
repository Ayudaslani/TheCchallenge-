#include<stdio.h>
main()
{
     int row,col;
     printf("Enter the array's row size :");
     scanf("%d",&row);
     printf("Enter the array's col size :");
     scanf("%d",&col);

     int a[row][col];

     printf("Enter array A's elements :\n");
     for(int i=0; i <row; i++)
     {
        for(int j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);

        }
     }

     int b[row][col];

     printf("Enter array B's elements :\n");
     for(int i=0; i <row; i++)
     {
        for(int j=0; j<col; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
            
        }
     }

     printf("\n\n");
     int c[row] [col];
     printf("Array c is :");
     for(int i=0; i<row; i++)
     {
        for(int j=0; j<col; j++)
        {
            printf("%d ",c[i][j] = a[i][j] + b[i][j]);
        }
        printf("\n");
    }

}