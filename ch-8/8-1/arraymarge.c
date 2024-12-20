#include<stdio.h>

main()
{
    int size1,size2;
    printf("Enter size of first  array :");
    scanf("%d",&size1);
    printf("Enter size of second array :");
    scanf("%d",&size2);

    int a[size1], b[size2], marge[size1+size2]; 
    printf("\n Input First array :\n");
    for(int i=0; i<size1; i++)
    {
        printf(" a[%d] = ",i);
        scanf("%d",&a[i]);
    }

   
    printf("\n Input First array :\n");
    for(int i=0; i<size2; i++)
    {
        printf(" b[%d] = ",i);
        scanf("%d",&b[i]);
    }

    for(int i=0; i<size1; i++)
    {
        marge[i] = a[i];
    }
    for(int i=0; i<size2; i++)
    {
        marge[size1+i] = b[i];
    }
    printf("\n marge of two array is :");
    for(int i=0; i<size1+size2; i++)
    {
        printf("%d\t",marge[i]);
    }




}