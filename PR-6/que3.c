#include <stdio.h>

main()
{
    char password[50];

    printf("Create Your Password :");
    scanf("%[^\n]", &password);

    int islower, isdigit, issymbol, isupper;

    int len = 0;
    for (int i = 0; password[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; password[i] != '\0'; i++)
    {

        if (len <= 6)
        {
            if ((password[i] >= 'A' && password[i] <= 'Z'))
            {

                isupper = 0;
            }
            else if ((password[i] >= 'a' && password[i] <= 'z'))
            {
                islower = 0;
            }
            else if (password[i] >= '0' && password[i] <= '9')
            {
                isdigit = 0;
            }
            else
            {
                issymbol = 0;
            }
        }
    }

    if ((isupper == 0) && (islower == 0) && (isdigit == 0) && (issymbol == 0))
    {
        printf("Your password is Strong.");
    }
    else
    {
        printf("Your password is not  Strong.");
    }
}
