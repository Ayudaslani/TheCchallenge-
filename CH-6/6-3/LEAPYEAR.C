#include<stdio.h>
#include<conio.h>
void main()
{
	int start,end;
	clrscr();
	printf("Enter first number :");
	scanf("%d",&start);
	printf("Enter second number :");
	scanf("%d",&end);

	do
	{
		if(start % 4 == 0)
		{
			printf("%d is leap year\n",start);

		}
	    start++;


	}while(start <= end);



	getch();

}