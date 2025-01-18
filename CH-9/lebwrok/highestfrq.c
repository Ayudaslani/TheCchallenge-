

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter any string :");
    gets(str);
    int count = 0;
    int max = 0;
    int max1 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {

                count++;
            }
        }
        if (count > max)
        {
            max = count;
            max1 = str[i];
        }
    }
    printf("Highset : %c\n", max1);
}
