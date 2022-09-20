#include<stdio.h>

main()
{
	int i,j,k,a,b;
	
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

		for(b=i; b<5; b++)
		{
			printf("  ");
		}
		
		for(a=i; a>=1; a--)
		{
			printf("%d ",a);
		}
		
		printf("\n");
	}
}

