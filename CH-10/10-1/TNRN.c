#include <stdio.h>

void get_qoute();

// TNRN = Take nothing return nothing
void main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        get_qoute();
    }
}

void get_qoute()
{
    printf(" Take Nothing Return Nothing ...\n");
}