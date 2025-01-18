#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int n;
    char name[100], role[100];

    fp = fopen("data.txt", "w");
    if (fp != NULL)
    {
        // printf("File is open...");

        printf("Enter the number of employees: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("\nEnter details for employee %d:\n", i + 1);

            fflush(stdin);
            printf("Name :");
            gets(name);

            printf("Role :");
            gets(role);

            fprintf(fp, "Employee %d:\n", i + 1);
            fprintf(fp, "Name: %s\n", name);
            fprintf(fp, "Role: %s\n\n", role);
        }
        fclose(fp);
    }

    else
    {
        printf("file is not open ..");
    }
}
