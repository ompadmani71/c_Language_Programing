// Write a C program to check whether a string is a palindrome or not.

#include<stdio.h>
#include<string.h>

	main()
	{
		char a[100],rev[100];
		
		printf("Enter The string...\n");
		gets(a);
		
		strcpy(rev,a);
		
		strrev(rev);
		
		printf("--------------------------------------------------\n\n");  
		if(strcmp(a,rev) == 0)
	             {	     	
			 printf("\tString is Palindrome...\n");
		 }
		 else
		 {
		 	printf("\tString is  non Palindrome...\n");
		 }
		printf("\n--------------------------------------------------\n\n");  
	} 

