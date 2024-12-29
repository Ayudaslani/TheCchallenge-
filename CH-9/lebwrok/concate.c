#include <stdio.h>
main()
{
    char a[50];
    char b[50];
    char c[100];

    printf("Enter the first string:");
    scanf("%[^\n]", &a);

    printf("Enter the second string:");
    scanf("%[^\n]", &b);

    // printf("\n");
    // int len = 0;
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     c[i] = a[i];
    //     len++;
    // }
    // int len1 = 0;
    // for (int i = 0; b[i] != '\0'; i++)
    // {
    //     c[i + len] = b[i];
    //     len1++;
    // }
    // for (int i = 0; i < len + len1; i++)
    // {
    //     printf("%c", c[i]);
    // }
}