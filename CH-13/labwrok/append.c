#include <stdio.h>

void main()
{
    FILE *fp1;
    FILE *fp2;

    
    fp1 = fopen("write.txt", "a");

    if (fp1 != NULL && fp2 != NULL)
    {
        printf("File is open..");
        for (int i = 1; i <= 50; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                printf("%d ", i);
                fprintf(fp1, "%d ", i);
            }
        }


    }
    else
    {
        printf("File is not open ...");
    }
}