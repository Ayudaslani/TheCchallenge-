#include <stdio.h>
#include <string.h>

void main()
{
    char name[50];
    char *ptr[50];

    printf("Enter any string :");
    gets(name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        ptr[i] = &name[i];
    }

    printf("%s", name);
}