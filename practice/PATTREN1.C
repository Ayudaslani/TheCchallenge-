#include<stdio.h>
//#include<conio.h>
 main()
{
	int i,j;
//	clrscr();
	printf("*\n");
	for(i=1; i<=5; i++)
	{
		printf("*");
		for(j=1; j<=i; j++)
		{
			printf("%d",j);

		}
		for(j=i-1; j>=1; j--)
		{
		       printf("%d",j);
		}
		printf("*");
		printf("\n");

	}
	for(i=4; i>=1; i--)
	{
		 printf("*");
		 for(j=1; j<=i; j++)
		 {
		       printf("%d",j);
		 }
		 for(j=i-1; j>=1; j--)
		 {
		       printf("%d",j);

		 }
		 printf("*");
		 printf("\n");


	}
	printf("*");


//	getch();





}
