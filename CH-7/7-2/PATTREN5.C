#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,n=1;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(s=1; s<i; s++)
		{
			printf(" ");

		}
		i=1;
		for(j=i; j<=5; j++)
		{
			printf("%d\t",n);
			n++;


		}

		printf("\n");
	}

	getch();

}