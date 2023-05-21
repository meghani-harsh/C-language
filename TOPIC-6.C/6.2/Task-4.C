#include<stdio.h>
#include<conio.h>
main()
{
    int a=0,b=1,n,i,c;
    clrscr();
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
	printf("%d\n",a);


	c=b+a;
	a=b;
	b=c;



    }




    getch();
}