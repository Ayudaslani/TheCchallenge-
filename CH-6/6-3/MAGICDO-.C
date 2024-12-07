#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int rem ,sum= 0, i=1;
	int mul = 1;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	do
	{
		rem = n % 10;
		sum = sum + rem;
		mul = mul * rem;
		n = n / 10;
		i++;

	}while(n != 0);

	if(sum == mul)
	{
		printf("Its magic number");
	}
	else
	{
		printf("isn't magic number");

	}

	getch();

}