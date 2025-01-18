#include <stdio.h>
// #include<conio.h>
int main()
{
	int i, j, s;
	// clrscr();

	for (i = 1; i <= 5; i++)
	{
		for (s = 1; s < i; s++)
		{
			printf(" ");
		}
		for (j = i; j <= 5; j++)
		{
			if (i % 2 != 0)
			{
				(j % 2 == 0)
					? printf("%d", j + 64)
					: printf("%c", j + 64);
			}
			else
			{
				(j % 2 == 0)
					? printf("%c", j + 95)
					: printf("%d", j + 95);
			}
		}
		printf("\n");
	}

	// getch();
}