#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1;
	clrscr();
	printf("\n\n");
	printf("/\\ WELCOME TO OUR RESTURANT /\\");
	printf("\n\n");

	printf("press 1 for panjabi \n");
	printf("press 2 for gujarati \n");
	printf("press 3 for south indian \n");

	printf("Enter your choice ..");
	scanf("%d",&n);

	switch(n)
	{
		case 1 :
			clrscr();
			printf("YOUR ORDER IS PANJABI...");
			break;

		case 2 :

			clrscr();
			printf("SELECT THE ITEMS IN GUJARATI ITEMS\n\n");
			printf("1 is sabji \n\n");
			printf("2 is roti \n\n");

			printf("Enter any choice ::");
			scanf("%d",&n1);
			switch (n1)
			{
				case 1 :
					printf("YOUR ORDER IS SABJI.. ");
					break;
				case 2 :
					printf("YOUR ORDER IS ROTI..");
					break;

			}
			break;
		case 3 :
			clrscr();
			printf("YOUR ORDER IS SOUTH INDIAN..");
			break;




	}

	getch();









}