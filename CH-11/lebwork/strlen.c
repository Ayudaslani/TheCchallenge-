#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    char *ptr = str;

    printf("Enter any string :");
    gets(str);

     int len = 0;

    while (*(ptr++) != '\0')
    {
        len++;
    }
    printf("lenght : %d", len);
}