#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("Enter any string :");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                str[i] = '0';
            }
        }
        if (str[i] != '0')
        {
            printf("%c", str[i]);
        }
    }
}