#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	int i;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		sum+=i;


	}
	printf("sum is %d",sum);


	getch();

}