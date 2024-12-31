#include <stdio.h>
#include <string.h>

main()
{
    char name[20];
    char original[20];

    printf("Enter the string :");
    gets(name);

    puts(name);

    strcpy(original, name);
    // printf("original : %s", original);

    printf("\n");
    strrev(name);
    // printf("Revser : %s", name);

    printf("\n\n");

    int cmp = strcmp(original, name);
    if (cmp == 0)
    {
        printf("string is palindrom ");
    }
    else
    {
        printf("string  not  palindrom ");
    }
}