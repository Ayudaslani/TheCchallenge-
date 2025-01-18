#include <stdio.h>
#include "../10-2/function.c"

void inputOfArray(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
int isEven(int size, int a[])
{
    int even1 = 0;
    int odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even1++;
        }
        else
        {
            odd++;
        }
    }
    return even1;
    
}
void main()
{
    int size;
    printf("Enter the Array size :");
    size = input();

    int a[size];

    inputOfArray(size, a);

    int result = isEven(size, a);
    printf("%d  Total Even", result);
}