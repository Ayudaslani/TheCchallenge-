#include <stdio.h>

int sum(int start, int end)
{
    if (start == end)
    {
        return start;
    }
    else
    {
        return start + sum(start + 1, end);
    }
}
void main()
{
    int start, end;

    printf("Enter the start :");
    scanf("%d", &start);

    printf("Enter the End :");
    scanf("%d", &end);

    int res = sum(start, end);
    printf("sum of : %d", res);
}