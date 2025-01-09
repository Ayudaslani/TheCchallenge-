#include <stdio.h>

int palindroem(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        return palindroem(num / 10, rev * 10 + num % 10);
    }
}
void main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    int res = palindroem(num, 0);

    if (num == res)
    {
        printf("%d is palindrome number ", num);
    }
    else
    {
        printf("%d is not palindrome number ", num);
    }
}