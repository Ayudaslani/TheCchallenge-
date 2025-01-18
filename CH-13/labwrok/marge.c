#include <stdio.h>

void main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;

    char msg1[100000];
    char msg2[100000];
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("marge.txt", "w");

    if (fp1 != NULL && fp2 != NULL && fp3 != NULL)
    {
        printf("file is open ...");

        fscanf(fp1, "%[^\b]", &msg1);
        fscanf(fp2, "%[^\b]", &msg2);

        printf("%s", msg1);
        printf("%s", msg2);

        fprintf(fp3, "%s", msg1);
        fprintf(fp3, "%s", msg2);

        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }
    else
    {
        printf("File is not open...");
    }
}