#include <stdio.h>

int cube()
{
    int n;

    printf("Enter any number  :");
    scanf("%d", &n);

    return n * n * n;
}

void main()
{
    int result = cube();
    printf("Cube is  : %d", result);
}