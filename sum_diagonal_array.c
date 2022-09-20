// Write C program to find sum of diagonal elements of a matrix.


#include<stdio.h>
	main()
	{
		int i,j,r,c,sum=0;
		
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
		printf("\nDiagonal of matrix...\n");
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				if(i == j)
				{
					printf("%d ",a[i][j]);
					sum += a[i][j];
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
		
		printf("\nSum of Diagonal = %d",sum);
		
	}


