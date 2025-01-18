#include <stdio.h>
// #include<conio.h>
int main()
{
	int i, j;
	// clrscr();
	for (i = 10; i >= 6; i--)
	{
		for (j = i; j >= 6; j--)
		{
			printf("%d\t", j * j);
		}
		printf("\n");
	}

	// getch();
}