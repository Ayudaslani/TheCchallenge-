#include <stdio.h>

main()
{
    int num;
    int a, b, c;
    printf("Enter the number  :");
    scanf("%d", &num);

    a = 0;
    b = 1;
    c = a + b;
    printf("%d", a);
    printf("%d", b);

    for (int i = 0; i < num; i++)
    {
        printf("%d", c);
        a = b;
        b = c;
        c = a + b;
    }
}