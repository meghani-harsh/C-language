#include<stdio.h>
main()
{
	int r,c;
	printf("Enter row size: ");
	scanf("%d",&r);
	
	printf("Enter col size: ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j;


	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int r1,c1;
	
	printf("Enter row size: ");
	scanf("%d",&r1);
	
	printf("Enter col size: ");
	scanf("%d",&c1);
	
    int b[r][c]; 
    int sum1=0,sum2=0;
    
	for(i=r1;i<r1;i++)
	{
		for(j=0;j<c;j++)
		{
			
			    printf("%d",a[r1][j]);
			    sum1=a[r1][j];
			   
					
			
		}
	}
	 printf("%d\n",sum1);

int C[r][c1];

		for(i=0;i<r;i++)
     	{
		for(j=c1;j<c1;j++)
		{
			
			    printf("%d",a[i][c1]);
			    sum2+=a[i][c1];
			   
					
			
		}
	}
	 printf("%d",sum2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

