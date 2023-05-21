#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
	printf("Enter value of A");
	scanf("%d",&a);

	if(a>0)
	{
	  printf("This Number is Positive");
	}
	else if(a==0)
	{
	  printf("This Number is Neutral");
	}
	else
	{
	  printf("This Number is Negative");
	}
getch();
}