#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter the value of X :");
    scanf("%d", &x);

    printf("Enter the value of y :");
    scanf("%d", &y);

    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Before swapping :\n");
    printf("X : %d\n", *ptr1);
    printf("y : %d\n", *ptr2);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("After swapping :\n");
    printf("X : %d\n", *ptr1);
    printf("y : %d\n", *ptr2);
}