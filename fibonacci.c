// Write C program print out Fibonacci series. (0,1,1,2,3,5,8…).

#include<stdio.h>

	main()
	{
			int n,i,f1=0,f2=1,f3=0;
			
				f3 = f1 + f2;
				
				printf("How long:-");
				scanf("%d",&n);
				
				printf("Fibonacci series....\n");
				printf("%d  %d",f1,f2);
				
				for(i=3; i<=n; i++)
				{
					printf("  %d",f3);
					f1 = f2;
					f2 = f3;
					f3 = f1 + f2;
					
				}
	}
		



