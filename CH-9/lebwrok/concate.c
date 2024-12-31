#include <stdio.h>
#include <string.h>

main()
{
    char str1[50];
    char str2[50];
    char name[50];

    printf("Enter the first string : ");
    gets(str1);

    
    printf("Enter the second string : ");
    gets(str2);

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
        name[i + len1] = str2[i];
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        printf("%c", name[i]);
    }
}