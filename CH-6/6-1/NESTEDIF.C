#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value of a , b and c :");
	scanf("%d %d %d",&a,&b,&c);

	if(a==b && a==c && b==c)
	{
		printf("all are equal...!!!");

	}
	else if(a==b || a==c || b==c)
	{
		printf("Both are equal.. !!!");
	}
	else
	{
		if(a > b)
		{
			if(a > c)
			{
				printf("%d is maximum number",a);
			}
			else
			{
				printf("%d is maximum number",c);
			}

		}
		else
		{
			 if(b > c)
			 {
				 printf("%d is maximum number",b);
			 }
			 else
			 {
				 printf("%d is maximum number",c);
			 }

		}

	}
	getch();

}