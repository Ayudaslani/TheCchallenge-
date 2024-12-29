#include <stdio.h>

main()
{
    // static string

    // char name[6] = {'A', 'y', 'u', 's', 'h', 'i'};

    char name[50] = "Ayushi";

    // name[0] = 'A';
    // name[1] = 'y';
    // name[2] = 'u';
    // name[3] = 's';
    // name[4] = 'h';
    // name[5] = 'i';

    // printf("Name : %c", name[0]);
    // printf(" %c", name[1]);
    // printf(" %c", name[2]);
    // printf(" %c", name[3]);
    // printf(" %c", name[4]);
    // printf(" %c", name[5]);

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c", name[i]);
    // }

    printf("Name is %s", name);
}