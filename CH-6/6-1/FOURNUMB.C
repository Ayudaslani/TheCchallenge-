#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c, d;
	clrscr();
	printf("Enter value of a ,b , c and d :");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a == b && a == c && a == d && b == c && b == d && c == d)
	{
		printf("all are equal ..");
	}
	else if (a == b == c || a == b == d || b == c == d)
	{
		printf("Three are equal..");
	}
	else if (a == b || a == c || a == d || b == c || b == d || c == d)
	{
		printf("both are equal..");
	}

	else
	{
		if (a > b)
		{
			if (a > c)
			{
				if (a > d)
				{
					printf("%d is maximun", a);
				}
				else
				{
					printf("%d is maximum", d);
				}
			}
			else
			{
				printf("%d is maximum", c);
			}
		}
		else if (b > c)
		{
			if (b > d)
			{
				printf("%d is max", b);
			}
			else
			{
				printf("%d is maximum", d);
			}
		}
		else
		{
			if (c > d)
			{
				printf("%d is max", c);
			}
			else
			{
				printf("%d is maximum", d);
			}
		}
	}

	getch();
}