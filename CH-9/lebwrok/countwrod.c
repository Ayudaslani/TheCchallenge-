#include <stdio.h>
#include <string.h>
main()
{
    char str[50];

    printf("Enter the string :");
    gets(str);

    puts(str);
    int word = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            word++;
        }
    }
    printf("words : %d\n", word);
}
