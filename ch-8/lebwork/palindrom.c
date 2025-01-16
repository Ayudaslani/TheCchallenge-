#include <stdio.h>

void main()
{
    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    int a[size];
    printf("Array Input : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Output : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    int isprime = 0;
    for (int i = 0; i < size / 2; i++)
    {
        if (a[i] == a[size - i - 1])
        {
            isprime = 1;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("The array is palindrome !!");
    }
    else
    {
        printf("The array is not palindrome !!");
    }
}