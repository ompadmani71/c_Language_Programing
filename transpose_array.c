// Write C program matrix convert into transpose matrix.

#include<stdio.h>
	main()
	{
		int i,j,r,c;
		
		printf("How many row:- ");
		scanf("%d",&r);
		
		printf("How many colom:- ");
		scanf("%d",&c);
		
		int a[r][c];
		
		printf("\nEnter Array element...\n");
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nBefore Transpose...\n");
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		
		printf("\nAfter Transpose...\n");
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
	}


