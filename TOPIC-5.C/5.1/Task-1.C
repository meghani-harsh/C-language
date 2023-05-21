#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
	printf("Enter value of A");
	scanf("%d",&a);

	printf("Enter value of B");
	scanf("%d",&b);

	if(a<b)
	{
	  printf("A is minimum");
	}
	else
	{
	  printf("B is minimum");
	}
getch();
}