#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void main()
{

    // struct Student s1;
    // printf("Enter Roll No: ");
    // scanf("%d", &s1.rollNo);
    // fflush(stdin);
    // printf("Enter Name: ");
    // gets(s1.name);
    // printf("Enter Marks: ");
    // scanf("%f", &s1.marks);

    // printf("\n\n");
    // printf("Roll No: %d\n", s1.rollNo);
    // printf("Name: %s\n", s1.name);
    // printf("Marks: %.2f\n", s1.marks);

    // object of array

    int size;
    printf("Enter the size:");
    scanf("%d", &size);
    struct Student s1[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n\n");
        printf("Enter Roll No: ");
        scanf("%d", &s1[i].rollNo);
        fflush(stdin);
        printf("Enter Name: ");
        gets(s1[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s1[i].marks);
    }
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Roll No: %d\n", s1[i].rollNo);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f\n", s1[i].marks);
    }
}