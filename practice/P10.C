#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter any character :");
	scanf("%c",&ch);

	if((ch >= 'a' &&  ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
	{
		printf("%c is alphbets",ch);

	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("%c is digits",ch);
	}

	else
	{
		printf("%c is special character");
	}
	getch();
}