#include <stdio.h>

main()
{
    char name[50];

    printf("Enter the string :");
    scanf("%[^\n]", &name);

    printf("\n");
    printf("%s", name);

    printf("\n\n");
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 32)
        {
            name[i] = '0';
        }
    }

    for (int i = 0; name[i] != '\0'; i++)
    {

        if (name[i] == '0')
        {
            i++;
            if (name[i] >= 97 && name[i] <= 122)
            {
                name[i] -= 32;
            }
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
        printf("%c", name[i]);
    }
}