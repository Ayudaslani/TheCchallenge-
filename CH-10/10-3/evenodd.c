#include <stdio.h>

void printEvenOdd(int start, int end)
{
    if (start > end)
    {
        return;
    }

    if (start % 2 == 0)
    {
        printf("%d ", start);
    }
    printEvenOdd(start + 1, end);
}
int main()
{
    int start, end;

    printf("Enter the start :");
    scanf("%d", &start);

    printf("Enter the End :");
    scanf("%d", &end);

    printEvenOdd(start, end);

    return 0;
}