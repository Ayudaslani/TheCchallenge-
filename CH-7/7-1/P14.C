#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=1;
	clrscr();
	for(i=1; i<=5; i++)
	{       n=i;
		for(j=i; j>=1; j--)
		{
			if(i)
			{
				printf("%d",n);
				n++;

			}
			else
			{

			}
			printf("%d\t",n);

			n++;
		}
	printf("\n");

	}


	getch();

}