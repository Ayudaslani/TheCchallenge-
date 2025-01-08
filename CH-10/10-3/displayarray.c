#include <stdio.h>
int len, start;
void Array(int size, int a[], int start, int len)
{
    if (start >= len)
    {
        return;
    }
    printf("%d ", a[start]);
    Array(size, a, start + 1, len);
}
void main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d", &size);

    int a[size];

    printf("\n\n Array Input : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    Array(size, a, start, len);
}