#include <stdio.h>

union Employee
{
    int id;
    char name[20];
    float salary;
};

void main()
{

    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    union Employee e1[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n\n");
        printf("Enter the Id:");
        scanf("%d", &e1[i].id);
        fflush(stdin);
        printf("Enter the name :");
        gets(e1[i].name);
        printf("Enter the salary :");
        scanf("%.2f", &e1[i].salary);
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Roll No: %d\n", e1[i].id);
        printf("Name: %s\n", e1[i].name);
        printf("Marks: %.2f\n", e1[i].salary);
    }
}