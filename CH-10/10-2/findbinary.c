#include <stdio.h>

main()
{
    int num;
    printf("Ente rthe number :");
    scanf("%d", &num);
    int a[num];

    for (int i = num; i > 0; i--)
    {
        if (num != 0)
        {
            a[i] = num % 2;
            num = num / 2;
            printf("%d\t", a[i]);
        }
    }
}
