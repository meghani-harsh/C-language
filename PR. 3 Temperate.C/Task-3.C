#include<stdio.h>
#include<conio.h>
int main()
{
	int first;
	int last;
	int n;
	int sum;
	clrscr();
	
	printf("Enter any digit: ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	
	sum=n+last;
	
	printf("the sum of first num. and lats num.=%d",sum);
}