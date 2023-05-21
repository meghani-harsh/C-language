#include<stdio.h>
#include<conio.h>

main()

{
    float a1,a2,a3;
    clrscr();

    printf("Enter a1");
    scanf("%f",&a1);

    printf("Enter a2");
    scanf("%f",&a2);

    a3=180-(a1+a2);

    printf("The angle of a3=%f",a3);
    getch();
    }