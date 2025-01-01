#include <stdio.h>

main()
{
    int num;
    int istrue = 0;

    printf("Enter any number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            istrue++;
        }
    }

    if (istrue == 2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}