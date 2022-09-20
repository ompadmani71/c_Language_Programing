// Write a C program to find Sum of all Array Elements by passing array as an argument using User Define Function.

#include<stdio.h>

int sum(int a[],int n)
	{
		int i,sum=0;
		
		for(i=0; i<n; i++)
		{
			sum = sum + a[i];
		}
		return sum;
	}
	
void main()
	{
		int i,n,sum1;
		
		printf("Enter size of array");
		scanf("%d",&n);
		
		int a[n];
		
		printf("\nEnter element...");
		
		for(i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
		}
		
		sum1 = sum(a,n);
		 
		printf("Sum of array = %d",sum1);
	}


