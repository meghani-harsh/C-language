#include<stdio.h>
#include<conio.h>

int main()
{
	float area, b, h;
	clrscr();
	
	printf("Enter base and hight");
	scanf("%f%f",&b,&h);
	
	area=0.5*b*h;
	
	printf("Area of triangle is:%6.2f",area);

	getch();
	}