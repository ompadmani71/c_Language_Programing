#include<stdio.h>

	main()
	{
			int f=1,n,i;
			
				printf("Enter Number For find Factorial:-");
				scanf("%d",&n);
				
				for(i=n; i>=1; i--)				
				{
					f = f * i;
					
				}
				
				printf("\nFactorial of %d = %d",n,f);
	}
