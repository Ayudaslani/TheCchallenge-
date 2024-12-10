#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=1;
	clrscr();
	/*
	  1         1
	  12        2 3
	  123       4 5 6
	  1234      7 8 9 10
	  12345     11 12 13 14 15

	*/
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{

			       printf("%d",n);
			       n++;

		}
	printf("\n");

	}

	getch();

}