#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 12, b = 6;
	int sum, sub, mul, div, mod;
	clrscr();

	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;

	printf("12 + 6 =  %d", sum);
	printf("\n12 – 6 = %d", sub);
	printf("\n12 * 6 = %d", mul);
	printf("\n12 / 6 = %d", div);
	printf("\n12 % 6 = %d", mod);

	getch();
}