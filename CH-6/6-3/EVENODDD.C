#include<stdio.h>
#include<conio.h>
void main()
{
	int n;

	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	do
	{
		if(n % 2 == 0)
		{
			printf("%d is even",n);
		}
		n--;


	}while(n >= 1);


	getch();

}