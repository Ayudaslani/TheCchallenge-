#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	/*
	  10101     12345
	  01010     12345
	  10101     12345
	  01010     12345
	  10101     12345


	*/

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i%2)
			{
			if(j%2==0)
			{
				printf("0");

			}
			else
			{
					    printf("1");

			}

			}
			else if(i%2==0)
			{
				      if(j%2==0){
					printf("1");
				      }
				      else
				      {
					printf("0");
				      }

			}

		}
	printf("\n");

	}

	getch();

}