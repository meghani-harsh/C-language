#include<stdio.h>
#include<conio.h>

int main()
{
	clrscr();
	int len,bre,area;
	
	printf("Enter the lenth of rectanagle=");
	scanf("%d",&len);
	
	printf("Enter the breadth of rectangle=");
	scanf("%d",&bre);
	
	area=len*bre;
	
	printf("Area of rectangle is = %d",area);
	getch();
	
}