// Write C program to find second largest number in array.

#include<stdio.h>

	main()
	{
		int m1=0,m2=0,i,j,r,c;
		
		printf("How many row:-");
		scanf("%d",&r);
		
		printf("How many colom:-");
		scanf("%d",&c);
		
		int a[r][c];
		
		
		for(i=0; i<c; i++)
	    {
	    	for(j=0; j<c; j++)
	    	{
	    		printf("a[%d][%d] = ",i,j);
	    		scanf("%d",&a[i][j]);
			}
		} 
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				if(a[i][j] > m1)
				{
					m2 = m1;
					m1 = a[i][j];
				}
				else if(a[i][j] > m2 && a[i][j] < m1)
				{	
					m2 =a[i][j];
				}
		    }
		}
		
		printf("\n\tSecound largest number is %d",m2);
	}

