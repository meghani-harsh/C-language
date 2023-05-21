#include<stdio.h>

main()
{
	int n;
	printf("Enter array size");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i );
		scanf("%d",&a[i]);
	}
	
	printf("%d",n);
	
	
}