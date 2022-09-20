// Write C program use switch statement. Display months name. Also, provide proper validationput: M
// Output: March

#include<stdio.h>
   main()
   {
        char choice;
		
		printf(" J for January \n F for February \n M for March \n A for April \n m for May \n j for June \n G for July \n a for August \n s for September \n O for October \n N for November \n D for December \n");	
        scanf("%c",&choice);
		
		switch(choice)
		{
               case 'J':
			      printf("January");
				  break;
				  
				case 'f':  			
			       printf("February");
			       break;
			       
			    case 'M':  			
			       printf("March");
			       break;
			       
				case 'A':  			
			       printf("April");
			       break;   	
				   
				case 'm':  			
			       printf("May");
			       break;   	
				   
				case 'j':  			
			       printf("June");
			       break;   
				   
				case 'G':  			
			       printf("July");
			       break;   
				   
				case 'a':  			
			       printf("August");
			       break;   	
			       
			    case 'S':  			
			       printf("Saptember");
			       break;   	
			          
			    case 'O':  			
			       printf("Octomber");
			       break;   	
			       
			    case 'N':  			
			       printf("Navember");
			       break;   	
			      
				case 'D':  			
			       printf("December");
			       break;   
	}

}

