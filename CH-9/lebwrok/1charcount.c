#include <stdio.h>
#include <string.h>

main()
{
    char str[50];
    printf("Enter the string :");
    gets(str);

    puts(str);
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {

            if (str[i] == str[j])
            {

                str[j] = '0';
                count++;
            }
        }
        if (str[i] == str[0])
        {

            printf("%c  :%d times  \n", str[i], count);
        }
    }
}
