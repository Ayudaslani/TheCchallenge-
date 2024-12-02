#include<stdio.h>
#include<conio.h>
void main(){
	int a = 34;
	float b = 48.65;
	clrscr();
	// explicit int -> float
	printf("INT\t: %d\n",a);
	printf("Float\t :%f\n",(int)a);

	// explicit float -> int
	printf("Float\t :%.2f\n",b);
	printf("int\t :%d\n",(float)b);
	getch();

}