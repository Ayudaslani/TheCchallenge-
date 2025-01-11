#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;

    int *ptr;
    int *ptr1;

    ptr = &a;
    ptr1 = &b;

    printf(" a = %d\n", a);
    printf(" A = %d", *ptr);

    printf("\n\n");
    printf("a = %d\n", &a);
    printf("A = %d", *ptr);

    printf("\n\n");
    printf("b = %d\n", &b);
    printf("B = %d", *ptr1);
}