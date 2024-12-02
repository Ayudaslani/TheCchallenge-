#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("Enter any alpabets :");
	scanf("%c",&ch);


	if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
	{
		printf("alphbets %c is vowel",ch);
	}
	else
	{
		printf("alphbets %c is consonant",ch);
	}

	getch();


}