#include <stdio.h>

void main()
{
    FILE *fp1;

    fp1 = fopen("divisible3nd5.txt", "w");
    if (fp1 != NULL)
    {
        printf("file is open ...");
        for (int i = 1; i <= 50; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                printf("%d ", i);
                fprintf(fp1, "%d ", i);
            }
        }
        fclose(fp1);
    }
    else
    {
        printf("file is not open ...");
    }
}