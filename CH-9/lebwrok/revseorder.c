#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    char toserach;
    int i;

    printf("Enter any string :");
    gets(str);
    printf("Character any serach :");
    toserach = getchar();

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == toserach)
        {
            printf("%c is found at index %d\n", toserach, i);
        }
        i++;
    }
}