#include<stdio.h>

main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);

    int a[size];

    printf("\nInput of array :");
    printf("\n Enter elements :");
    for(int i=0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i < size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(a[i] > a[j])
            {
                int n = a[i];
                a[i] = a[j];
                a[j] = n;

            }
       
        }
        printf("%d\t",a[i]);
    }
    

}