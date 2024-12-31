#include <stdio.h>
#include <string.h>

main()
{
    char Email[] = "admin@gmail.com";
    char Password[] = "123456";

    char E1[100];
    char P1[50];

    printf("Enter your Email :");
    gets(E1);
    printf("Enter your password :");
    gets(P1);

    // int cmp = strcmp(E1, Email);
    // int cmp1 = strcmp(P1, Password);

    int cmp;

    for (int i = 0; E1[i] != '\0', Email[i] != '\0'; i++)
    {

        if (E1[i] == Email[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }
    int cmp1;
    for (int i = 0; P1[i] != '\0', Password[i] != '\0'; i++)
    {

        if (P1[i] == Password[i])
        {
            cmp1 = 0;
        }
        else
        {
            cmp1 = 1;
            break;
        }
    }

    if ((cmp == 0) && (cmp1 == 0))
    {
        printf("Login succsfully.");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.");
    }
}