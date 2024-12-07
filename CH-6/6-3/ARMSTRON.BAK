#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rem, num, sum = 0;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);

	num = n;

	// armstrong 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153
	do
	{
		rem = n % 10;
		sum =sum +rem*rem*rem;
		n = n/10;

	}while(n != 0);

	if(num == sum)
	{
		printf("%d is armstrong number",num);

	}
	else
	{
		printf("%d is not armstrong number",num);

	}

	getch();

}