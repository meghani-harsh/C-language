#include<stdio.h>
#include<conio.h>

int main()
{
	float amt,rate,time,si;
	clrscr();
	
	printf("Enter amount=");
	scanf("%f",&amt);
	
	printf("Enter rate=");
	scanf("%f",&rate);
	
	printf("Enter time=");
	scanf("%f",&time);
	
	si=(amt*rate*time)/100;
	
	printf("Simple interest is = %f",si);
	getch();
	}