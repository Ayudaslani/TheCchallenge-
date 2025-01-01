#include <stdio.h>

main()
{
    char str[50];
    char rev[50];

    printf("Enter the String :");
    scanf("%[^\n]", &str);

    // length of string
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++, len++)
        ;

    // revser string

    for (int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = str[i];
    }

    int ispalindrom;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == rev[i])
        {
            ispalindrom = 0;
        }
        else
        {
            ispalindrom = 1;
            break;
        }
    }

    if (ispalindrom == 0)
    {
        printf("%s is palindrom string", str);
    }
    else
    {
        printf("%s is not palindrom string ", str);
    }
}