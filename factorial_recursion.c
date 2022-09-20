// Write a C program to find the factorial of given 2 numbers using recursion.


#include<stdio.h>


int fact( int n)
	{
		if(n <= 1)
		{
			return 1;
		}
		else
		{
			return n * fact(n-1);
		}
	}

	main()
	{
		int ans,ans1,n1,n2;
		
		printf("Enter First number :-");
		scanf("%d",&n1);
		
		printf("Enter secound number :-");
		scanf("%d",&n2);
		
		ans = fact(n1);
		printf("\n\nFirst Number factorial = %d\n",ans);
		
		ans1 = fact(n2);
		printf("Secound Number factorial = %d",ans1);
		
	}

