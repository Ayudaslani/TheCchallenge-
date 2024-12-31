#include <stdio.h>

main()
{
    char str[50];

    printf("Enter any string :");
    scanf("%[^\n]", &str);

    int count;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {

                str[j] = '0';
                count++;
            }
        }
        if (str[i] != '0')
        {
            printf("%c => %d\n", str[i], count);
        }
    }
}