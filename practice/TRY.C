#include<stdio.h>
//#include<conio.h>
 main()
{
	int i,j,n=1,value;
	//clrscr();

	for(i=1; i<=5; i++)
	{
		 n = i;
		 value = 1;

		for(j=i; j>=1; j--)
		{
			printf(" %d",n);
			n = n + value;
			value--;

		}
		printf("\n");

	}

//	getch();

}
