#include <stdio.h>

main()
{
    int size;
    printf("Enter array size :");
    scanf("%d",&size);

    int a[size];
    printf("Enter array elements :\n");
    for(int i=0; i< size;  i++)
    {
      
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Length of an array : %d",size);
}