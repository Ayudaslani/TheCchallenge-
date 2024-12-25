#include <stdio.h>

main()
{
    int door[50];
    int isDoor[50];

    for (int i = 0; i < 50; i++)
    {
        door[i] = i + 1;
        isDoor[i] = 0;
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if (door[j] % i == 0)
            {
                if (isDoor[j] == 0)
                {
                    isDoor[j] = 1;
                }
                else
                {
                    isDoor[j] = 0;
                }
            }
        }
    }

    int open = 0, close = 0;
    for (int i = 0; i < 50; i++)
    {
        if (isDoor[i] == 1)
        {
            open++;
        }
        else
        {
            close++;
        }
    }

    printf("Open : %d\nClose : %d\n",open,close);
}