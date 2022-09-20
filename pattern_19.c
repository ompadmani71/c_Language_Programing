#include<stdio.h>

main()
{
	int i,j,k,a,b;
	
	for(i=5; i>=2; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
		for(k=5; k>i; k--)
		{
			printf("  ");
		}
		
		for(k=5; k>i; k--)
		{
			printf("  ");
		}
		
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
		for(k=5; k>i; k--)
		{
			printf("  ");
		}

		for(a=i; a<5; a++)
		{
			printf("  ");
		}
		
		for(b=i;b>=1;b--)
		{
			printf("%d ",b);
		}
		
		printf("\n");
	}

}

