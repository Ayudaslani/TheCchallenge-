#include <stdio.h>
int n;
int fact(int n)
{

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
void main()
{
    printf("Enter any number :");
    scanf("%d", &n);
    int ans = fact(n);
    printf("Factorial : %d\n", ans);
    
}