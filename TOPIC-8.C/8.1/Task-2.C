#include<stdio.h>
main()
{


	int n;
	printf("Enter array size");
	scanf("%d",&n);
	
	int a[n];
	int i;
    int sum=0,avg;	
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i );
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("avg is =%d",avg);
}