#include<stdio.h>

  main()
  {
     int i=1,n;
     
     printf("How long:-");
     scanf("%d",&n);
	printf("\n----------------------------------------");
	printf("\n\t\twhile...\n"); 
	printf("----------------------------------------\n");
	    while(i <= n)
	     {	
	         if(i % 2 == 1)
			 {
			     
	 	        printf("%d\n",i);
	 	     }
	 	        i++;
	     }	
  	printf("----------------------------------------");
	printf("\n\t\tdo while...\n"); 
	printf("----------------------------------------\n");
  	         i=1;    
  	         do
  	         {
  	         	if(i % 2 ==1)
  	         	{
				   
                 printf("%d\n",i);
			}
  	       	    i++;
			  }
  	        while(i <= n);
  	        
  	printf("----------------------------------------");
	printf("\n\t\tfor...\n"); 
	printf("----------------------------------------\n");
	       
	             for(i=1; i<=n; i++)
	             {
	             	if(i % 2 == 1)
	             	{
					 
	             	printf("%d\n",i);
	             	
	             }
				 }
	         
	
	
	
	
  }
