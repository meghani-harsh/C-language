#include<stdio.h>
#include<conio.h>
main()
{
 int i,j,a=11;
 clrscr();
	 for(i=1;i<=5;i++)
	 {
	  for(j=1;j<=i;j++)
	  {
	   printf("%d",a);
	   a++;
	  }
	  printf("\n");
	 }
 getch();
}