#include<stdio.h>
#include<conio.h>
void main(){
	int day,week,year;
	clrscr();
	printf("Enter the days :");
	scanf("%d",&day);
	year = day / 365;
	week = day / 7;

	printf("year\t :%d\n",year);
	printf("week\t :%d\n",week);


	getch();

}