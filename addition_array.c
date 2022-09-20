// Write C program to addition of two matrices.

#include<stdio.h>
	main()
	{
		int i,j,r,c;
		
		printf("How long row:-");
		scanf("%d",&r);
		
		printf("How long Colom:-");
		scanf("%d",&c);
		
		int a[r][c],b[r][c],d[r][c];
		
		printf("\nEnter First Array...\n");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter Secound Array...\n");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("b[%d][%d] = ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nAdition...\n");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				d[i][j] = a[i][j] + b[i][j];
				printf("%d ",d[i][j]);
			}
			printf("\n");
		}
	}

