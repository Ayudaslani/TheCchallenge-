#include<stdio.h>
#include<conio.h>
void main(){
	int a = 77;
	int b = ' ';
	char c = 'C';
	char d = '$';

	// implicit type casting int -> char and
	// char -> int  return the ascii values
	clrscr();
	printf("Int\t : %d\n",a);
	printf("char\t : %c\n",a);

	printf("\n");
	printf("INT\t : %d\n",b);
	printf("Char\t : %c\n",b);

	printf("\n");
	printf("Char\t : %c\n",c);
	printf("INT\t : %d\n",c);

	printf("\n");
	printf("Char\t : %c\n",d);
	printf("Int\t : %d\n",d);

	getch();
}