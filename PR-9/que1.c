#include <stdio.h>

void main()
{
    FILE *even;
    FILE *odd;

    even = fopen("even_file.txt", "w");
    odd = fopen("odd_file.txt", "w");

    if (even != NULL && odd != NULL)
    {
        printf("File is open ..\n");

        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(even, "%d ", i);
            }
            else
            {
                fprintf(odd, "%d ", i);
            }
        }
        fclose(even);
        fclose(odd);
    }
    else
    {
        printf("File is not open ..\n");
    }
}