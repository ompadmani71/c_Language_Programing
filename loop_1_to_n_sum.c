#include<stdio.h>

  main()
  {
     int i=1,n,sum=0;
     
     printf("How long:-");
     scanf("%d",&n);
	printf("\n----------------------------------------");
	printf("\n\t\twhile...\n"); 
	printf("----------------------------------------\n");
	    while(i <= n)
	     {	
	            sum = sum + i;
	 	        printf("%d\n",i);
	 	        i++;
	     }	
	     printf("Sum = %d\n",sum);
  	printf("----------------------------------------");
	printf("\n\t\tdo while...\n"); 
	printf("----------------------------------------\n");
  	         i=1;
			 sum=0;      
  	         do
  	         {
               sum = sum + i;
			    printf("%d\n",i);  	       	
  	       	    i++;
			  }
  	        while(i <= n);
  	        printf("Sum = %d\n",sum);
  	printf("----------------------------------------");
	printf("\n\t\tfor...\n"); 
	printf("----------------------------------------\n");
	       sum = 0;
	             for(i=1; i<=n; i++)
	             {
	             	sum = sum + i;
	             	printf("%d\n",i);
	             	
	             	
				 }
	         printf("Sum = %d",sum);
	
	
	
	
  }
