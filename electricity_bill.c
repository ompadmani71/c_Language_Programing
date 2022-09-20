// Write a C program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>

   main()
   {
         float r,p=0,i=0,t=0,total=0;
		 
		 printf("Enter Units:-");
		 scanf("%f",&r);
		 
		 if(r <= 50)
		   {
		 	    i = 0.50;
		   }  	
		else
		{
            i = 0.75;
		}	
   	
   	             t = r * i;
   	             p = t * 20 / 100;
   	             total = t + p;
   	             
   	             printf("Total bil = %.2f",total);
   	         
	}

