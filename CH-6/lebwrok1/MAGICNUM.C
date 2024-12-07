#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int i = 1;
	int sum = 0;
	int mul = 1;
	int rem;

	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);


	while(1 <= n)
	{
		rem = n % 10;
		sum = sum + rem;
		mul = mul * rem;
		n = n / 10;
		i++;

	}
  //	printf("%d\t",sum);
//	printf("%d",mul);
	if(sum == mul)
	{
		printf("Its magic number");

	}
	else
	{
		printf("Its not  magic number");
	}


	getch();

}