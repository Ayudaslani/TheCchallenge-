#include <stdio.h>

struct Employee
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};

void main()
{

    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    struct Employee e1[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the employee Id %d :", i + 1);
        scanf("%d", &e1[i].emp_id);
        fflush(stdin);
        printf("Enter the employee Name %d :", i + 1);
        gets(e1[i].emp_name);
        printf("Enter the employee Age %d :", i + 1);
        scanf("%d", &e1[i].emp_age);
        fflush(stdin);
        printf("Enter the employee role %d :", i + 1);
        gets(e1[i].emp_role);
        printf("Enter the employee City %d :", i + 1);
        gets(e1[i].emp_city);
        printf("Enter the employee exp %d :", i + 1);
        scanf("%d", &e1[i].emp_experience);
        fflush(stdin);
        printf("Enter the employee Company name: %d :", i + 1);
        gets(e1[i].emp_company_name);
    }

    for (int i = 0; i < size; i++)
    {
        printf("employee Id :%d \n", e1[i].emp_id);
        printf("employee Name :%s \n", e1[i].emp_name);
        printf("employee Age :%d \n", e1[i].emp_age);
        printf("employee role :%s \n", e1[i].emp_role);
        printf("employee City :%s\n", e1[i].emp_city);
        printf("employee exp :%d\n", e1[i].emp_experience);
        printf("employee company name :%s\n", e1[i].emp_company_name);
    }
}