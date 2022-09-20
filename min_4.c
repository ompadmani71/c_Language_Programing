#include<stdio.h>
//write a program to find minimum noumber givin 4 noumber.
main()
{
	int a,b,c,d;
	
	printf("Enter a,b,c,d values");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("A is min...");
			}
			else
			{
				printf("D is min...");
			}
			
		}
		else
		{
			if(c<d)
			{
				printf("C is min...");
			}
			else
			{
				printf("D is min...");
			}
		}
	}
	else
	{
        if(b<c)
		{
			if(b<d)
			{
				printf("B is min...");
			}
			else
			{
				printf("D is min...");
			}
			
		}
		else
		{
            if(c<d)
			{
               printf("C is min...");			 	
			}			
			
			else
			{
				printf("D is min...");
			}
		}		
		
	}
	
}
