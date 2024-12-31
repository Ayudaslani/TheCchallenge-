#include <stdio.h>

main()
{
    char name[50];
    char rev[50];
    printf("Enter the string :");
    scanf("%[^\n]", &name);

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = name[i];
    }
    int isnot = 0;
    for (int i = 0; i < len; i++)
    {
        if (rev[i] != name[i])
        {
            isnot = 1;
            break;
        }
    }
    if (isnot == 0)
    {
        printf("It's Palindrome ");
    }
    else
    {
        printf("Its not palindrome ");
    }
}