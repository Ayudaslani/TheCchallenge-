#include <stdio.h>

void main()
{
    FILE *fp;
    FILE *fp2;

    char msg[100];
    fp = fopen("demo.txt", "r");
    fp2 = fopen("demo1.txt", "w");

    if (fp != NULL && fp2 != '\0')
    {
        // printf("File is open..");
        fscanf(fp, "%[^\a]", &msg);

        printf("%s", msg);

        fprintf(fp2, "%s", msg);

        fclose(fp);
        fclose(fp2);
    }
    else
    {
        printf("File is not open..");
    }
}