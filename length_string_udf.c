// Write a C program to find the length of the String by passing String as an Argument using the User Define Function.


#include<stdio.h>
#include<string.h>

char length(char a[])
	{
		int n;
		
		n = strlen(a);
		
		return n;
	}
	

 main()
	{
		char a[100];
		int l;
		
		puts("Enter the string...");
		gets(a);
		
		l = length(a);
		
		printf("String length = %d",l);
	}

