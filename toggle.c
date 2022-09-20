#include<stdio.h>

	main()
	{
		char st;
		
		printf("Enter a message...");
		scanf("%c",&st);
		
		    if(st >= 65 && st <= 90)
			{
				st = st + 32;
				printf("%c ",st);
			}
			else if(st >= 97 && st <= 122)
			{
				st = st - 32;
				printf("%c ",st);
			}
			else
			{
				printf("\nyou are not enter a character...");
			}
		
	}
