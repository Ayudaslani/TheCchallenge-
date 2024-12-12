#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	for(i=1; i<=5; i++)
	{
		for(s=5; s>i; s--)
		{
			printf(" ");

		}
		for(j=i; j>=1; j--)
		{
			printf("*");

		}
	printf("\n");

	}

	getch();


}