#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int rem ;
	int rev = 0;
	clrscr();


	//revser number = 123 = 321
	printf("Enter any number :");
	scanf("%d",&n);

	while(n != 0)
	{
		  rem = n % 10;
		  rev = rev * 10 + rem;
		  n = n / 10;





	}

	printf("revser number is %d",rev);
	getch();




}