#include <stdio.h>
#include <conio.h>

int main()
{
	float area;
	int r;

	printf("Enter the radius");
	scanf("%d", &r);

	area = 3.14 * r * r;

	printf("Area of circul is %f", area);
	getch();
}