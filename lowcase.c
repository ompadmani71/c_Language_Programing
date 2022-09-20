#include<stdio.h>

	main()
	{
		char st;
		int i;
		
		puts("Enter a Charcter...");
		scanf("%c",&st);
		
		for(i=0; i<1; i++)
		{
			if(st >= 65 && st <= 90)
			{
				st = st + 32;
				printf("\n%c ",st);
			}
			else
			{
				printf("\n%c is alrady lower case ",st);
			}
		}
	}
