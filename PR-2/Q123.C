#include <stdio.h>
#include <conio.h>
void main()
{

	int marks;
	char grade;

	clrscr();
	printf("Enter your score :");
	scanf("%d", &marks);

	grade = (marks > 90 && marks <= 100)
				? 'A'
			: (marks > 80 && marks <= 90)
				? 'B'
			: (marks > 70 && marks <= 80)
				? 'C'
			: (marks > 50 && marks <= 70)
				? 'D'
			: (marks > 33 && marks <= 50)
				? 'E'
			: (marks < 33)
				? 'F'
				: printf("You are fail..");

	fflush(stdin);

	switch (grade)
	{
	case 'A':
		printf("Your grade is A . Excellent!!!");

		break;

	case 'B':

		printf("your grade is B . Well done!");
		break;
	case 'C':

		printf("your grade is C . Good job");
		break;
	case 'D':

		printf("your grade is D . Good, but you could do better");
		break;
	case 'E':

		printf("your grade is E. You passed,but you could do better");
		break;
	case 'F':

		printf("Sorry,you failed");
		break;
	}

	if (grade >= 'A' && grade <= 'E')
	{
		printf(" Congratulation!You are eligible for The next level.");
	}
	else
	{
		printf(" Please try aging next time ");
	}

	getch();
}
