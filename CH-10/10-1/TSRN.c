#include <stdio.h>

// TSRN = take something return nothing

void sum(int a, int b);
void main()
{
    sum(5, 9);
}
void sum(int a, int b)
{

    printf("%d + %d = %d", a, b, a + b);
}