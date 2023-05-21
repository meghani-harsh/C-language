#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
	  printf("Enter value of A: ");
	  scanf("%d",&a);

	  printf("Enter value of B");
	  scanf("%d",&b);

	  c=a;
	  a=b;
	  b=c;

	  printf("A is :%d\n",a);
	  printf("B is :%d",b);
 getch();
}