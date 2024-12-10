#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();

	for(i='A'; i<='E'; i++)
	{
		for(j=i; j>='A'; j--)
		{
			printf("%c",j);

		}
	printf("\n");

	}

	getch();

}