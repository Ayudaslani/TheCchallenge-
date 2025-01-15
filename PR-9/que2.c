#include <stdio.h>

struct Student
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void main()
{

    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    struct Student s1[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("Enter the Details Of Student %d :\n", i + 1);
        printf("Roll no =>");
        scanf("%d", &s1[i].roll_no);
        fflush(stdin);
        printf("Name =>");
        gets(s1[i].name);
        printf("Chemistry Marks =>");
        scanf("%d", &s1[i].chem_marks);
        printf("Maths Marks =>");
        scanf("%d", &s1[i].maths_marks);
        printf("Physics Marks =>");
        scanf("%d", &s1[i].phy_marks);
    }

    printf("\n\n");
    printf("OUTPUT :\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("%s(%d)\n", s1[i].name, s1[i].roll_no);
        printf("Chemistry => %d\n", s1[i].chem_marks);
        printf("Maths => %d\n", s1[i].maths_marks);
        printf("Physics => %d\n", s1[i].phy_marks);
        int total = s1[i].chem_marks + s1[i].maths_marks + s1[i].phy_marks;
        printf("Total => %d/300\n", total);
        float per = total / 3;
        printf("Percentage => %.2f%%\n", per);
    }
}