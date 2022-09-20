#include<stdio.h>

	main()
	{
		char st;
		int i;
		
		printf("Enter a Character...:-");
		scanf("%c",&st);
		
		for(i=0; i<1; i++)
		{
			if(st >= 97 && st <= 122)
			{
				st = st - 32;
				printf("\n%c ",st);
			}
			else
			{
				printf("\n%c is alrady uper case :",st);
			}
		}
	}
