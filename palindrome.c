// Write a C program to enter a number and print its reverse & check whether num is palindrome or not?

#include<stdio.h>

	main()
	{
			int n,i,rev=0,a;
			
			printf("Enter Number:-");
			scanf("%d",&n);
			
			a = n;
			
			while(n != 0)
			{
				  i = n % 10;
				  rev = rev * 10 + i;
				  n = n / 10;
				
			}
			printf("%d reverse number is = %d\n",a,rev);
			
			if(a == rev)
			{
				printf("This is Palindrome Number");
			}
		     else
		     {
		     	
				printf("This is not Palindrome Number");
			 }
		}

