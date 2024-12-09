#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{

		if(i==6)
			continue;
		printf("%d\t",i);

	}

	getch();

}