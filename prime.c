// Program Check whether num is prime or not.

#include<stdio.h>

	main()
	{
			int n,i,p=0;
			
			printf("Enter Number:-");
			scanf("%d",&n);
		
			for(i=1; i<=n; i++)
			{
				if(n % i == 0)
				{
					p++;
				}
			}
		
			
	        if(p == 2)
			{
				printf("Number is a prime...");
			}    
			else
			{
				
				printf("Number is a non prime...");
			}	
	}

