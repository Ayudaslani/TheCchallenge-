#include <stdio.h>

 main()
{
	int i, j, n = 1;

	for (i = 1; i <= 5; i++)
	{
		n = j;
		for (j = i; j <= 1; j--)
		{
			printf("%d\t", n);
			n++;
		}
		printf("\n");
	}
}