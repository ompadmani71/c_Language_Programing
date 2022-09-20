// Write a C program to find the sum of the first and last digit of a number.

#include<stdio.h>
	main()
	{
			int n,fd,ld,sum=0;
			
			printf("Enter Number:-");
			scanf("%d",&n);
			
			ld = n % 10;
			
			while(n >= 10)
			{
				n = n % 10;
			}
			
			fd = n;
			sum = fd + ld;
			printf("\nSum = %d",sum);
		
	}

