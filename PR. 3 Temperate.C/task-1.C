#include<stdio.h>
#include<conio.h>
int main()
{
	char z;
	char c='a';
	clrscr();
	
	
	do
	{
		printf("%c\n",c);
		
		c=c+4;
	}
	while(c<='z');
	getch();
}