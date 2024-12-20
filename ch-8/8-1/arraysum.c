#include<stdio.h>

main()
{
    int size; 
    printf("Enter array of size :");
    scanf("%d",&size);

    int a[size];
    printf("\n\n Array Input :\n");

    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    int n;
    printf("Enter n value :");
    scanf("%d",&n);

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j < size; j++)
        {
            if(a[i] + a[j] == n)
            {
                printf("%d %d\n" ,a[i] , a[j]);
            }
        }
        
    }
}