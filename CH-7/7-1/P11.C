#include<stdio.h>
//#include<conio.h>
 main()
{
	int i,j;
//	clrscr();
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%2==0)
			{
				printf("@\t");
			}
			else
			{
				if(j%2==0)
				{
					printf("*\t");
				}
				else
				{
					printf("%d\t",j*10);
				}

			}


		}
	printf("\n");

	}

//	getch();



}
