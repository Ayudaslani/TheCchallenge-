#include <stdio.h>

int sumEven(int start, int end)
{
    if (start == end)
    {
        return start;
    }
    else
    {
        if (start % 2 == 0)
        {
            return start + sumEven(start + 2, end);
        }
    }
    sumEven(start + 1, end);
}
int main()
{
    int start, end;

    printf("Enter the start :");
    scanf("%d", &start);

    printf("Enter the End :");
    scanf("%d", &end);

    int res = sumEven(start, end);
    printf("Sum of Even Number : %d", res);

    return 0;
}