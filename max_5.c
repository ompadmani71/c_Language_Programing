#include<stdio.h>
//write a program to find maximum noumber givin 5 noumber.
main()
{
	int a,b,c,d,e;
	
	printf("Enter a,b,c,d,e values:-");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is max...");
					
				}
				else
				{
					
					printf("E is max...");
				}
			}
			else
			{
				if(d>e)
				{
					
					printf("D is max...");
				}
				else
				{
					printf("E is max...");
				}
			}
			
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is max...");
				}
				else
				{
					printf("E is max...");
				}
			}
			else
			{
				if(d>e)
				{
					
					printf("D is max...");
				}
				else
				{
					printf("E is max...");
					
				}
				
			}
		}
		
	}
	else
	{
	    if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("B is max...");
				}
				else
				{
					printf("E is max...");
				}
			}
			else
			{
            	if(d>e)			
			     { 
			   	   printf("D is max...");
			   	
			     }
			    else
			    {
			   	  printf("E is max...");
			    }	
				
			}
			
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is max...");
				}
				else
				{
					printf("E is max...");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is max...");
				}
				else
				{
					printf("E is max...");
				}
			}
			
		}	
		
	}
	
	
}
