#include<stdio.h>
//write a program to find maximum noumber givin 4 noumber.
main()
{
	int a,b,c,d;
	
	printf("Enter a,b,c,d values");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max...");
			}
			else
			{
				printf("D is max...");
			}
			
		}
		else
		{
			if(c>d)
			{
				printf("C is max...");
			}
			else
			{
				printf("D is max...");
			}
		}
	}
	else
	{
        if(b>c)
		{
			if(b>d)
			{
				printf("B is max...");
			}
			else
			{
				printf("D is max...");
			}
			
		}
		else
		{
            if(c>d)
			{
               printf("C is max...");			 	
			}			
			
			else
			{
				printf("D is max...");
			}
		}		
		
	}
	
}
