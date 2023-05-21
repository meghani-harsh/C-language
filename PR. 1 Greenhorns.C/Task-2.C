#include<stdio.h>
#include<conio.h>
main()
{
int bs,HAR,DA,TA,gs;
clrscr();

	printf("Enter Basic Salary: ");
	scanf("%d",&bs);

	HAR=(bs*10)/100;
	DA=(bs*5)/100;
	TA=(bs*8)/100;
	gs=bs+HAR+DA+TA;

	printf("Gross salary is:%d",gs);

getch();
}