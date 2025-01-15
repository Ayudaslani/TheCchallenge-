#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50];
    char str2[50];

    int *ptr1[50];

    printf("Enter the string 1 :");
    gets(str1);

    printf("Enter the string 2 :");
    gets(str2);

    int len = 0;

    while (str1[len] != '\0')
    {
        len++;
    }
    int i = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {

        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';

    for (int i = 0; str1[i] != '\0'; i++)
    {
        ptr1[i] = &str1[i];
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        printf("%c", *ptr1[i]);
    }
}
