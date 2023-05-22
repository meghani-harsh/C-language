#include<stdio.h>
main()
{
	int n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
		printf("%d\n",a[i]);
	}
	
	
	
	
	
	
}
