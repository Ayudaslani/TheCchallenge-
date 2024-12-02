#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	clrscr();

	// number is even or odd
	printf("Enter the number :");
	scanf("%d",&n);

	if(n % 2 == 0) //10 % 2 == 0          0 == 0
	{
		clrscr();
		printf("\n\n");
		printf("%d is even number");

	}
	else
	{
		clrscr();
		printf("\n\n");
		printf("%d is odd number");
	}

	getch();


}