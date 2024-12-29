#include <stdio.h>
main()
{
    char name[20];

    printf("Enter the string :");
    scanf("%[^\n]", &name);

    printf("\n");
    printf("string is : %s", name);

    printf("\n");

    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[0] >= 97 && name[0] <= 122)
        {
            name[0] = name[0] - 32;
        }

        else if (name[i] == 32)
        {
            i++;
            if (name[i] >= 97 && name[i] <= 122)
            {
                name[i] = name[i] - 32;
            }
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
    }

    printf("\n");
    printf("title case is : %s", name);
}
