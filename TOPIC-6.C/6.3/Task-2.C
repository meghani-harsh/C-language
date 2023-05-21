#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,i,c;
    clrscr();

    printf("Enter c: ");
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
       a=a*i;
    }

    printf("%d",a);
    getch();
}