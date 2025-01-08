#include <stdio.h>

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
