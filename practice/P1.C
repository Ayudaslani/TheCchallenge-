#include<stdio.h>
#include<conio.h>
void main(){
	float length , breadth , perimeter;
	clrscr();
	printf("Enter the value of length :");
	scanf("%f",&length);
	printf("Enter the value of breadth :");
	scanf("%f",&breadth);

	perimeter = 2 * (length + breadth);
	printf("Preimeter is the %f",perimeter);

	getch();

}