#include<stdio.h>
#include<conio.h>
main()
{
     int n,i=1;
     clrscr();
     printf("Enter n");
     scanf("%d",&n);
     do
     {
       if(i%2==0)
     {
	 printf("%d\n",i);
     }
      i++;
     }
     while(i<=n);
getch();
}

