#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();

  printf("Enter a number: ");
  scanf("%d",&a);

  (a%2)
      ?printf("This number is odd..." )
      :printf("This number is even...");

getch();
}