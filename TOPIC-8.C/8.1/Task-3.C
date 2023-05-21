#include<stdio.h>
main()
{


	int n;
	printf("Enter array size");
	scanf("%d",&n);
	
	int a[n],b[n],i,c[n];
	
	    printf("Enter a element\n");  
		
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i );
		scanf("%d",&a[i]);
	}
	
	    printf("Enter b element\n");
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]",i );
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	
	c[i]=a[i]+b[i];

	printf("%d",c[i]);
    }
}