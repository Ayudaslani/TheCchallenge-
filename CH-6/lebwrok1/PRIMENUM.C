#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	while(n >= 1)
	{
		if(n % 1 == 0  && n % n == 0)
		{
			printf("%d is prime number",n);

		}
		else
		{
			printf("%d is not prime number",n);

		}



	}


	getch();

}