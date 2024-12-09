#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n;
	int count = 0;

	clrscr();

	printf("Enter any number :");
	scanf("%d",&n);

	while(n != 0)
	{
		n = n /10;
		count = count + 1;



	}

	printf("total digits %d",count);



	getch();

}