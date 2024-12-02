#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	clrscr();
	printf("Enter the week number :");
	scanf("%d",&n);

	if(n == 1)
	{
		printf("Sunday");
	}
	else if(n == 2)
	{
		printf("monday");
	}
	else if(n == 3)
	{
		printf("tuesday");
	}
	else if(n == 4)
	{
		printf("Wednesday");
	}
	else if(n == 5)
	{
		printf("Thursday");
	}
	else if(n == 6)
	{
		printf("friday");
	}
	else if(n == 7)
	{
		printf("saturday");
	}
	else
	{
		printf("Invalid week number");
	}
	getch();






}