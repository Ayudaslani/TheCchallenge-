#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter the any character :");
	scanf("%c",&ch);

	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
	       printf(" It is alpahbet ");
	}
	else
	{
		printf("it is not alpabet");
	}
	getch();


}