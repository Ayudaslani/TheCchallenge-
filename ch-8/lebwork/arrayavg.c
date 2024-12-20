#include<stdio.h>
main()
{
    int size;

    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];

    printf("Enter array elements :");
    for(int i=0; i< size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += + a[i];

    }

    printf("Average of an array  :%.2f",(float)sum / size);


}