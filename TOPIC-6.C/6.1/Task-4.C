#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n;
   clrscr();

   printf("Enter n");
   scanf("%d",&n);

   while(n>=i)
   {
	if(n%2==1)
	{
	   printf("%d\n",n);
	}
     n--;
   }
   getch();
}