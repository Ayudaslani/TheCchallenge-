#include <stdio.h>

main()
{
    int num;
    printf("Ente rthe number :");
    scanf("%d", &num);
    int a[num];

    int i = 0;
    while (num > 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
}
