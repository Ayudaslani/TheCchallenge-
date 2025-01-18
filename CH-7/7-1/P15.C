#include<stdio.h>
//#include<conio.h>
int main()
{
	int i,j,n,gap;
	//clrscr();

	for(i=1; i<=5; i++)
	{
		 n=i;
		 gap=7;
		 gap--;
		for(j=i; j>=1; j--)
		{

			printf("%d\t",n);
			n=n+gap;
			gap++;

		}
	printf("\n");

	}



	//getch();


}