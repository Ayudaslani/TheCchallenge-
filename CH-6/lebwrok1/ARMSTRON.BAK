#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n;
	int sum=0;
	int originalnum;
	int digits,rem;
	clrscr();

	printf("Enter any number :");
	scanf("%d",&n);
	originalnum = n;

	digits = log10(n) + 1;

	while(n != 0)
	{

		   rem = n % 10;
		   sum = sum + pow(rem , digits);
		   n = n / 10;
	}

	if(originalnum == sum)
	{
		printf("%d is armstrong number",originalnum);
	}
	else
	{
		printf("%d is not armstrong number",originalnum);
	}
	getch();


}