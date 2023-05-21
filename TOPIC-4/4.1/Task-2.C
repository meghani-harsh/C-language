#include<stdio.h>
#include<conio.h>

int main()

{
    int a,b;
    clrscr();
    printf("the value of a ");
    scanf("%d", &a);

    printf("the value of b ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the value of a %d\n", a);
    printf("the value of b %d", b);
    getch();
    }