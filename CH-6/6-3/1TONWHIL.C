#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	do
	{
	  printf("%d\t",i);
	  i++;


	}while(i <= n);


	getch();

}
