#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void main()
{
    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("X is %d", x);
    printf("y is %d", y);
}