#include<stdio.h>

  main()
  {
     int i,n;
     
     printf("How long:-");
     scanf("%d",&n);
	printf("\n----------------------------------------");
	printf("\n\t\twhile...\n"); 
	printf("----------------------------------------\n");
	i = n;
	    while(i >= 1)
	     {	
	 	        printf("%d\n",i);
	 	        i--;
	     }	
  	printf("----------------------------------------");
	printf("\n\t\tdo while...\n"); 
	printf("----------------------------------------\n");
  	         i = n;    
  	         do
  	         {
                printf("%d\n",i);  	       	
  	       	    i--;
			  }
  	        while(i >= 1);
  	        
  	printf("----------------------------------------");
	printf("\n\t\tfor...\n"); 
	printf("----------------------------------------\n");
	       
                 	       
	             for(i=n; i>=1; i--)
	             {
	             	printf("%d\n",i);
	             	
	             	
				 }
	         
	
	
	
	
  }
