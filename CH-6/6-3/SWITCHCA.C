#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("\n\npress 1 for sunnday");
	printf("\n\npress 2 for monday");
	printf("\n\npress 3 for tuesnday");
	printf("\n\npress 4 for wednesday");
	printf("\n\npress 5 for thursday");
	printf("\n\npress 6 for friday");
	printf("\n\npress 7 for saturday");

	printf("Enter your choice :");
	scanf("%d",&n);

	switch(n)
	{
	       case 1 :
			printf("Today is SUNDAY !!!");
			break;
	       case 2 :
			printf("Today is MONDAT !!!");
			break;
	       case 3 :
			printf("Today is TUESDATY !!!");
			break;
	       case 4 :
			printf("Today is WEDNESDAY !!!");
			break;
	       case 5 :
			printf("Today is THURSDAY !!!");
			break;
	       case 6 :
			printf("Today is FRIDAY !!!");
			break;
	       case 7 :
			printf("Today is SATURDAY !!!");
			break;
	      default :
			printf("Invalid choice .....");



	}


	getch();



}