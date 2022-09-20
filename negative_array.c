// Write C program to print all negative elements in an array.

#include<stdio.h>
	main()
	{
		int i,j,c,r;
		
		printf("How many row:-");
		scanf("%d",&r);
		
		printf("How many colom:-");
		scanf("%d",&c);
		
		int a[r][c];
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("\n..........................\n");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				if(a[i][j] < 0)
				printf("%d ",a[i][j]);
				else
				printf("  ");
			}
			printf("\n");
	    }
	}

