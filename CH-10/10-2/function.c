// TNRS
int input()
{
    int n;
    scanf("%d", &n);

    return n;
}
//TSRN
void outputArray(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
//TSRS

int sumArray(int size, int a[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

void avg(int sum, int size)
{

    printf("\n\n Average of array : %.2f", (float)sum / size);
}

//TSRN
void inputArray(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements   %d :", i + 1);
        a[i] = input();
    }

    outputArray(size, a);

    printf("\n\n");
    int sum = sumArray(size, a);

    printf("Sum of Array : %d", sum);

    avg(sum, size);
}