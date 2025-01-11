#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50];
    char str2[50];
    char name[50];

    char *ptr1[50];
    char **ptr2[50] = &ptr1[50];
    char ***ptr3[50] = &ptr2[50];

    printf("Enter the string 1 :");
    gets(str1);

    printf("Enter the string 2 :");
    gets(str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        ptr1[i] = &str1[i];
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        ptr2[i] = &str2[i];
    }

    int len1 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        len1++;
        name[i] = str1[i];
    }

    int len2 = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        len2++;
        name[len1 + i] = str2[i];
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        printf("%c", ***ptr3[i]);
    }
}