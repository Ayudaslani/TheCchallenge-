#include <stdio.h>

int natural(int start, int end)
{
    if (start <= end)
    {
        printf("%d\n", start);
        start++;
    }
    return natural(start, end);
}

void main()
{
    int start, end;
    printf("Enter the start :");
    scanf("%d", &start);

    printf("Enter the end :");
    scanf("%d", &end);

    int res = natural(start, end);
    printf("%d", res);
}
