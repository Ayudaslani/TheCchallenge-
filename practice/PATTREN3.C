#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem,last,i,j;
	clrscr();

	printf("Enter any number :");
	scanf("%d",&n);
	last = n % 10;


	while(n!=0)
	{
		rem = n % 10;
		n=n/10;


	}
	printf("%d",rem);

	getch();


}