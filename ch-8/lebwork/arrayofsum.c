#include<stdio.h>
main()
{

    int size;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];
    printf("Enter array A's elements :\n\n");
    for(int i=0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int b[size];
    printf("Enter array B's elements :\n\n");
    for(int i=0; i < size; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }

    int c[size];
    printf("Array C is :");
    for(int i=0; i<size; i++)
    {
        printf(" %d\t",c[i]= a[i] + b[i]);
    }

}