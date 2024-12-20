#include <stdio.h>

main()
{
    int size;

    printf("Enter number of elements :");
    scanf("%d",&size);

    int a[size];

    printf("\n\n");
    printf("Array Input\n\n ");
    for(int i = 0; i< size; i++)    
    {
         printf("Enter the elements  %d: ",i+1);
        scanf("%d",&a[i]);

    }
    
    printf("\n\n");
    printf("Array Output\n");

    for(int i=0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }

    

   
    


}
