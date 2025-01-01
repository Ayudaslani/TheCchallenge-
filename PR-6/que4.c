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

    int cmpEmail;

    for (int i = 0; E1[i] != '\0', Email[i] != '\0'; i++)
    {

        if (E1[i] == Email[i])
        {
            cmpEmail = 0;
        }
        else
        {
            cmpEmail = 1;
            break;
        }
    }
    int cmpPassword;
    for (int i = 0; P1[i] != '\0', Password[i] != '\0'; i++)
    {

        if (P1[i] == Password[i])
        {
            cmpPassword = 0;
        }
        else
        {
            cmpPassword = 1;
            break;
        }
    }

    if ((cmpEmail == 0) && (cmpPassword == 0))
    {
        printf("Login succsfully.");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.");
    }
}