#include<stdio.h>
main()
{
	int i,j,k,a;
	
	for(i=5; i>=1; i--)
	{
		
		for(k=1; k<i; k++)
		{
			printf("  ");
		}
		
		for(j=5; j>=i; j--)
		{
			if(j == 5)
			{
				printf("* ");
			}
			printf(" ");
		}
		
		for(a=j+2; a<=5; a++)
		{
			if(a == 5)
			{
				printf("* ");	
			}
			printf("   ");
		}
		
		printf("\n");
	}
}

