#include <stdio.h>

int length();

void main()
{
    int result = length();
    printf("Length is : %d", result);
}

int length()
{
    char str[50];

    printf("Enter Any string :");
    scanf("%[^\n]", &str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}