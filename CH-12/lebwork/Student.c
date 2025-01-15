#include <stdio.h>

struct Student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
};

void main()
{

    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    struct Student s1[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Student Id %d :", i + 1);
        scanf("%d", &s1[i].stu_id);
        fflush(stdin);
        printf("Enter the Student Name %d :", i + 1);
        gets(s1[i].stu_name);
        printf("Enter the Student Age %d :", i + 1);
        scanf("%d", &s1[i].stu_age);
        fflush(stdin);
        printf("Enter the Student Course %d :", i + 1);
        gets(s1[i].stu_course);
        printf("Enter the Student City %d :", i + 1);
        gets(s1[i].stu_city);
        printf("Enter the Student Standard %d :", i + 1);
        scanf("%d", &s1[i].stu_standard);
        fflush(stdin);
        printf("Enter the Student School: %d :", i + 1);
        gets(s1[i].stu_school);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Student Id :%d \n", s1[i].stu_id);
        printf("Student Name :%s \n", s1[i].stu_name);
        printf("Student Age :%d \n", s1[i].stu_age);
        printf("Student Course :%s \n", s1[i].stu_course);
        printf("Student City :%s\n", s1[i].stu_city);
        printf("Student Standard :%d\n", s1[i].stu_standard);
        printf("Student School :%s\n", s1[i].stu_school);
    }
}