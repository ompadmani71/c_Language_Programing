#include<stdio.h>
#include<string.h>

	main()
	{
		char st[100],st1[100];
		int i;
		
		puts("Enter a message...");
		gets(st);
		
		for(i=0; st[i] != 0; i++)
		{
			if(st[i] >= 65 && st[i] <= 90)
			{
				st[i] = st[i] + 32;
				printf("%c ",st[i]);
			}
			else
			{
				st[i] = st[i] - 32;
				printf("%c ",st[i]);
			}
		}
	}
