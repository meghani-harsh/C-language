#include<stdio.h>
#include<conio.h>

int main()
{
	float radius,area,perm;
	clrscr();
	
	printf("Enter radius = ");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	
	perm=2*3.14*radius;
	
	printf("Area of circle = %f",area);
	printf("\nperimeter of circle is = %f",perm);
	getch();
	}