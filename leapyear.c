#include<stdio.h>

	main()
	{
		int i,year,sy,ey;
		printf("Enter Year to check leap year list:-");
		printf("\nexample..");
		printf("1 tp 10\n");
		scanf("%d %d",&sy ,&ey);
		
		if(sy > ey)
		{
			printf("\nerror... becouse end year is gretter thaen start year");
		}
		else
		{
		
			printf("\n    All leap year between %d to %d below...",sy,ey);
			printf("\n----------------------------");
		
        	for(i=sy; i<=ey; i++)
				{
		
					if(i % 400 == 0)
					{
						printf("\n%d year is leap year",i);
					}
					else if(i % 100 == 0)
					{
						printf("\n%d year is leap year",i);
					}
					else if(i % 4 == 0)
					{
						printf("\n%d year is leap year",i);
					}
	   			}
	   }
	}
		
		
	
