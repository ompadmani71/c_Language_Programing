// Write a C program to find out the max from 4 numbers using the ternary operator. Also, provide proper validation layers.

#include<stdio.h>
main()
   {
   	
   	int a,b,c,d;
   	
   	printf("Enter a,b,c & d values");
   	scanf("%d %d %d %d",&a ,&b ,&c ,&d);
   	
   	
   	  (a > b)?
   	  
   	           (a > c)?
   	            
   	                (a > d)?
   	                      printf("A is max")
   	                      :printf("D is max")
   	
   	                         :(c > d)?
	                              printf("C is max")
		                  :printf("D is max")  
   	
              :(b > c)?
		        
		  (b > d)?
		          printf("B is max")
		          :printf("D is max")
					
	                    :(c > d)?
		               printf("C is max")
		               :printf("D is max");	
	}				   	
