#include<stdio.h>
#include<conio.h>
void main(){
	float redius,circumference,diameter,area;
	clrscr();
	printf("Enter the values of radius\n :");
	scanf("%f",&redius);

	diameter = 2 * redius;
	circumference = 2 * 3.14 * redius;
	area = 3.14 * (redius * redius);

	printf("Diameter is the %.2f\n",diameter);
	printf("Circumference is the %.2f\n",circumference);
	printf("area is the %.2f\n",area);


	getch();


}