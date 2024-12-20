#include<stdio.h>

main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);

    int a[size];

    printf("\n Input Array :\n");
    for(int i=0; i<size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    //12 13 14 12 15

 int arr[size];
    for(int i=0; i<size; i++)
    {
    
        for(int j=0; j<i; j++)
        {
          if(a[i]==a[j])
          {
          
           printf("%d",a[i]);
          }
          else
          {
            printf("%d %d",a[i],a[j]);
          }
          

        }
       
       
    }
   
    


}