#include <stdio.h>

main()
{
    char str[50];

    printf("Enter the stirng :");
    scanf("%[^\n]", &str);

    printf("\n");
    printf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf("\n\n");
    printf(" uppercase : %s", str);
}