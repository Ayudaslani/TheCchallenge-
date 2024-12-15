#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=1,count=1;
	clrscr();

	for(i=1; i<=5; i++)
	{

		for(j=1; j<=count; j++)
		{
			if(n==10)
				n = 1;
			printf(" %d",n);
			n++;
		}
		printf("\n");

		count = count * 2;


	}



	getch();

}