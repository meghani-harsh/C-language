#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,z;
 clrscr();
	  printf("Enter value of X: ");
	  scanf("%d",&x);

	  printf("Enter value of Y");
	  scanf("%d",&y);

	  z=(x+y)*(x+y)*(x+y);

	  printf("Answer is :%d",z);
 getch();
}