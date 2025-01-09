#include <stdio.h>

int array(int size, int start, int a[])
{
    if (start >= size)
    {
        return 0;
    }

    return (a[start] + array(size, start + 1, a));
}
void main()
{
    int size;
    printf("Enter array size :");
    scanf("%d", &size);

    int a[size];

    printf("\nArray Input : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int res = array(size, 0, a);
    printf("sum of array = :%d", res);
}