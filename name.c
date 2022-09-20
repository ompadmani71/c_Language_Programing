#include<stdio.h>
#include<string.h>

	main()
	{
		char st[100];
		int i;
		
		puts("Enter the your Name:- ");
		gets(st);
		
		for(i=0; st[i] != 0; i++)
		{
			if(st[i] == 32)
			{
				
			}
			else
			{
		    	printf("\n%c = %d",st[i] ,st[i]);
		    }
		}
	}
