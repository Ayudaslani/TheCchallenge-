#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char msg[10000];
    char ch;
    int word = 0;
    int line = 0;
    int character = 0;

    fp = fopen("write.txt", "r");

    if (fp != NULL)
    {
        printf("file is open..");

        while (ch = fgetc(fp) != EOF)
        {
            if (ch == '\n' || ch == '\0')
            {
                line++;
            }
        }

        fclose(fp);
    }
    else
    {
        printf("file is not open..");
    }

    printf("Total lines : %d", line);
    printf("Total words : %d", word);
    printf("Total character : %d", character);
}