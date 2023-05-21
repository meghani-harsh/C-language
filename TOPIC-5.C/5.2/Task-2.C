#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,d;
 clrscr();
	 printf("Enter Value of A");
	 scanf("%d",&a);

	 printf("Enter Value of B");
	 scanf("%d",&b);

	 printf("Enter Value of C");
	 scanf("%d",&c);

	 printf("Enter Value of D");
	 scanf("%d",&d);
	 if(a>b)
	 {
	  if(a>c)
	  {
	   if(a>d)
	   {
	    printf("A is max");
	   }
	   else
	   {
	    printf("D is max");
	   }
	  }
	 }
	 else if(b>c)
	  {
	   if(b>d)
	   {
	    printf("B is max");
	   }
	   else
	   {
	    printf("d is max");
	   }

	 }
	 else
	 {
	  if(c>d)
	  {
	    printf("C is max");
	  }
	  else
	  {
	    printf("D is max");
	  }
	 }
getch();
}