#include <stdio.h>
int len, start;
void Array(int a[], int start, int size)
{
    if (start >= size)
    {
        return;
    }
    printf("%d ", a[start]);
    Array(a, start + 1, size);
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

    Array(a, 0, size);
}