#include<stdio.h>
#include<conio.h>
int main()
{
	  int  i,n,sum=0;
	  clrscr();

	  printf("Enter n");
	  scanf("%d",&n);

	  for(i=1;i<=n;i++)
	  {
	      sum=sum+i;
	  }

	      printf("%d\n",sum);
	  getch();
}
