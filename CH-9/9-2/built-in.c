#include <stdio.h>
#include <string.h>
main()
{

    char name[50];
    char surname[50];
    printf("Enter the string : ");
    gets(name);

    printf("Enter the string : ");
    gets(surname);

    puts(name);
    printf("Length  : %d", strlen(name));

    printf("\n");

    // strupr(name);
    // printf("UPPER CASE : %s", name);

    // printf("\n");

    // strlwr(name);
    // printf("lower case : %s", name);

    // printf("\n");

    // strcat(name, surname);
    // printf("Concatination : %s\n", name);
    // printf("Concatination : %s\n", surname);

    // printf("\n");
    // strrev(name);
    // printf("revser : %s", name);

    printf("\n");
    // strcpy(name, surname);
    // printf("copy : %s\n", name);
    // printf("copy : %s", surname);

    printf("\n");
    int cmp = strcmp(name, surname);
    if (!cmp)
    {
        printf("Both are equal ");
    }
    else
    {
        printf("Both are not Equal ");
    }
}