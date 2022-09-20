#include<stdio.h>
//write a program to check it a person eligible for vot.
	main()
	{
		int age;
		
		printf("Enter your age for check you are eligible for voting:-");
		scanf("%d",&age);
	    
		
			if(age > 18)
			{
				printf("\nYou are eligible for voting...");
			}
			else if(age == 18)
			{
				printf("\nYou are eligible for voting...");
			}
			else 
			{
				
				printf("\nSorray You are not eligible for voting...");
			}
	}
