#include<stdio.h>

main()
{
    //static array
    int a[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90},
    };

    // a[0][0] = 10;
    // a[0][1] = 20;
    // a[0][2] = 30;

    // a[1][0] = 40;
    // a[1][1] = 50;
    // a[1][2] = 60;

    // a[2][0] = 70;
    // a[2][1] = 80;
    // a[2][2] = 90;


    // printf("%d ",a[0][0]);
    // printf("%d ",a[0][1]);
    // printf("%d ",a[0][2]);

    // printf("%d ",a[1][0]);
    // printf("%d ",a[1][1]);
    // printf("%d ",a[1][2]);

    // printf("%d ",a[2][0]);
    // printf("%d ",a[2][1]);
    // printf("%d ",a[2][2]);

    for(int i=0; i< 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    
}