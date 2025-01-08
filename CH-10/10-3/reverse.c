#include <stdio.h>

int revser(int num, int rev)
{

    if (num == 0)
    {
        return rev;
    }
    else
    {
        return revser(num / 10, rev * 10 + num % 10);
    }
}
void main()
{
    int num;

    printf("Enter any number :");
    scanf("%d", &num);

    int res = revser(num, 0);
    printf(" Reverse Number :%d", res);
}