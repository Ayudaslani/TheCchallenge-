#include <stdio.h>
#include "../10-2/function.c"

void main()
{
    int size;

    printf("Enter the size :");
    size = input();

    int a[size];

    inputArray(size, a);
}