#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,m;
clrscr();
	for(i=5;i>=1;i--)
	{
	    for(j=1;j<=i;j++)
	    {
		printf("%d",j);
	    }
	    for(k=5;k>i;k--)
	    {
	       printf("  ");
	    }
	    for(m=i;m>=1;m--)
	    {
	       printf("%d",m);
	    }
	 printf("\n");
	 }
	 for(i=1;i<=5;i++)
	{
	    for(j=1;j<=i;j++)
	    {
		printf("%d",j);
	    }
	    for(k=5;k>i;k--)
	    {
	       printf("  ");
	    }
	    for(m=i;m>=1;m--)
	    {
	       printf("%d",m);
	    }
	 printf("\n");


	}
getch();
}