#include <stdio.h>

 main()
{
	int i, j;

	for (i = 65; i <= 69; i++)
	{
		for (j = i; j <= 69; j++)
		{
			if (i % 2 == 0)
			{
				if (i % 2 == 0 && j % 2 == 0)
				{
					printf("%d", j - 64);

				}
				else
				{
					printf("%c", j);
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					printf("%c", j + 32);
				}
				else
				{
					printf("%c", j);
				}
			}
		}
		printf("\n");
	}

	
}