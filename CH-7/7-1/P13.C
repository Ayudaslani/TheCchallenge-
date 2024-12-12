#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=10; i>=6; i--)
	{
		for(j=i; j>=6; j--)
		{
			printf("%d\t",j*j);

		}
	printf("\n");

	}

	getch();

}