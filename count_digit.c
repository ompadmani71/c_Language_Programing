// Write a C program to count a number of digits in a number.

#include<stdio.h>
	main()
	{
			int n,count=0;
			
				printf("Enter Number:-");
				scanf("%d",&n);
				
				do{
					n /= 10;
					count++;
				}
				while(n != 0);
				
					printf("Number of digit = %d",count);
							
		
	}

