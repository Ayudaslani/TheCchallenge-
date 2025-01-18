#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    FILE *fp;
    char name[50];
    int roll, marks, totalStudents = 0, highestMarks = 0, totalMarks = 0;
    char topStudent[50]; // To store the name of the top student

    // Create and write to the file
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Unable to create file.\n");
        exit(1);
    }

    printf("Enter student details (Roll, Name, Marks). Enter -1 to stop:\n");
    while (1)
    {
        printf("Roll Number: ");
        scanf("%d", &roll);
        if (roll == -1)
            break;

        printf("Name: ");
        scanf("%s", name);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%d,%s,%d\n", roll, name, marks);
    }
    fclose(fp);

    // Read from the file and process the data
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Unable to open file.\n");
        exit(1);
    }

    printf("\nReading data from file...\n");
    while (fscanf(fp, "%d,%[^,],%d\n", &roll, name, &marks) != EOF)
    {
        totalStudents++;
        totalMarks += marks;

        if (marks > highestMarks)
        {
            highestMarks = marks;
            strcpy(topStudent, name);
        }
    }
    fclose(fp);

    // Display results

    printf("\nTotal Students: %d\n", totalStudents);
    printf("Average Marks: %.2f\n", (totalStudents > 0) ? (float)totalMarks / totalStudents : 0.0);
    printf("Top Student: %s with %d marks\n", topStudent, highestMarks);
}
