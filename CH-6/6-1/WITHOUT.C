#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the number :");
	scanf("%d",&n);

	if( (n/2) * 2 == n)
	{

		printf("the number is even ");
	}
	else
	{
		printf("the number is odd");
	}

	getch();



}