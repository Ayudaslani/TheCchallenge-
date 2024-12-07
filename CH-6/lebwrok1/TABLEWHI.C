#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int i = 1;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	while(i <= 10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;

	}

	getch();
}