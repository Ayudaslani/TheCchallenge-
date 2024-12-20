#include<stdio.h>
main()
{
    int door = 50;
    int count = 0, c=0, o=0;

    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=50; j++)
        {
            if(j%i == 0)
            {
                count = count + o;
                
                
                printf("%d open door\n",j);

            }
            else
            {
                  count = count + c;
                
                printf("%d close door\n",j);
            }
            
        }
       
    
    }
    if(j%i == 0)
            {
                printf("%d close door\n",j);

            }
            else
            {
                printf("%d open door\n",j);
            } 

}