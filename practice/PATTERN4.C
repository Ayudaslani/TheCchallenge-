#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	int crow,ccol;
	clrscr();
	crow = (i + 1) / 2;
	ccol = (j + 1) / 2;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(crow == i || ccol == j)
			{
				printf("0");
			}
			else
			{
				printf("1");

			}
		}
		printf("\n");


	}

	getch();


}