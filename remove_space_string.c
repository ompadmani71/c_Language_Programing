// Write a C program to remove spaces, blanks from a string.

#include<stdio.h>
#include<string.h>

	main()
	{
		char st[1000];
		int i,n;
		
		printf("Enter ehe string...");
		gets(st);
		
		n = strlen(st);
		
		for(i=0; i<=n; i++)
		{
	     	if(st[i] == 32)
			{
			     
			}
			else
			{
			    printf("%c",st[i]);
			}
	    }

	}

