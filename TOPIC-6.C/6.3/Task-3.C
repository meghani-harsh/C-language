#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a;
    clrscr();

    printf("Enter n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
	printf("%d*%d=%d\n",n,i,i*n);
    }
    getch();
}