#include<stdio.h>
#include<conio.h>
void main()
{
	float maths,english,science,total,avg;
	clrscr();
	printf("Enter the maths subject marks :");
	scanf("%f",&maths);
	printf("Enter the science subject marks :");
	scanf("%f",&science);
	printf("Enter the english subject marks :");
	scanf("%f",&english);

	total = maths + science + english;
	avg = total / 3;
	printf("Averagr marks : %.2f",avg);

	getch();

}