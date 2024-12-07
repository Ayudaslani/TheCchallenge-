#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rem;
	int i,rev = 0;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);
	num = n;

	for(; n != 0; i++)
	{
		rem = n % 10;
		rev = rev * 10 +rem;
		n = n / 10;


	}

	if(num == rev)
	{
		printf("%d is palindrom ",num);

	}
	else
	{
		printf("%d is not palindrom ",num);

	}
	getch();

}