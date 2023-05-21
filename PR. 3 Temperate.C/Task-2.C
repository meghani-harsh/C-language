#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int c=0;
	clrscr();
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		
		c++;
	}
	printf("totel digits %d",c);
	getch();
}