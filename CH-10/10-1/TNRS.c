#include <stdio.h>

// TNRS = take nothing return something
int cube()
{
    int n;
    printf("Enter the n :");
    scanf("%d", &n);

    return n * n;
}
int getoputput()
{
    int c;
    printf("Enter the a values : ");
    scanf("%d", &c);

    return c;
}
main()
{
    int result = cube();
    printf("Cube : %d", result);

    int n = getoputput();

    printf("Character : %c", n);
}