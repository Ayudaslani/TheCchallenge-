#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=100; i>=95; i--)
	{
		for(j=i; j>=95; j--)
		{
			printf("%d\t",j);

		}
	printf("\n");

	}

	getch();

}