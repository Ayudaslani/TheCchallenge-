#include<stdio.h>
#include<conio.h>
void main(){
	int x , y ,ans;
	clrscr();
	printf("Enter the values of X :");
	scanf("%d",&x);
	printf("Enter the values of y :");
	scanf("%d",&y);

	ans = (x * x * x) + (3 * x * x * y) + (3 * x * y * y) + (y * y * y);
	printf("%d",ans);
	getch();
}