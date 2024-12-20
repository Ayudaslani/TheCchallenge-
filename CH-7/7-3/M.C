#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(((i>=1 && i<=7) && (j==1 || j==5)) || ((i==2) && (j==2 || j==4)) || ((i==3) && (j==3)))
			{
				printf("* ");

			}
			else
			{
				printf("  ");

			}


		}
		printf("\n");


	}

	getch();


}