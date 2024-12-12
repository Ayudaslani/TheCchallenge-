#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	for(i=1; i<=10; i++)
	{

		for(j=i; j<=9; j++)
		{

			if(i%2==0)
			{
				continue;

			}
			else if(j%2==0)
			{
				continue;
			}
			else
			{
			// continue;
			}
		    printf("%d",j);
		}
	printf("\n");

	}

	getch();

}