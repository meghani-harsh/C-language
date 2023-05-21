#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
	 printf("Enter Value of A");
	 scanf("%d",&a);

	 printf("Enter Value of B");
	 scanf("%d",&b);

	 printf("Enter Value of C");
	 scanf("%d",&c);

	 if(a<b)
	 {
	  if(a<c)
	  {
	    printf("A is minimum");
	  }
	  else
	  {
	    printf("C is minimum");
	  }
	 }
	 else
	 {
	  if(b<c)
	  {
	    printf("B is minimum");
	  }
	  else
	  {
	    printf("c is minimum");
	  }
	 }
getch();
}