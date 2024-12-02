#include<stdio.h>
#include<conio.h>
void main(){
	float cm , km, m;
	clrscr();
	printf("Enter the length of the centimeter :");
	scanf("%f",&cm);

	km = cm / 100000;
	m = cm / 100;

	printf("Kilometer ids the %f\n",km);
	printf("meter is the %f\n",m);


	getch();


}