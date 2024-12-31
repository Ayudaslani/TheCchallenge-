#include <stdio.h>
#include <string.h>

main()
{
    char str[50];

    printf("Enter the string :");
    gets(str);

    puts(str);
    int alphabets = 0;
    int digits = 0;
    int other = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        else
        {
            other++;
        }
    }
    printf("Alphabets : %d\n", alphabets);
    printf("digits : %d\n", digits);
    printf("speical character  : %d\n", other);
}