// Write a C program to count the frequency of each character in a string.

#include<stdio.h>
#include<string.h>
 
	main()
	{
	    char a[100];  
	    int  i,j,count=0,n;
	 
	    printf("Enter  the string : ");
	    gets(a);
	     
	    for(j=0; a[j]; j++)
		{
			n = j;
		}
		
		printf("\n--------------------------------------------------\n\n");  
	    printf("      Frequency Count Character in string:\n");
	    printf("\n--------------------------------------------------\n\n");  
	 
	    for(i=0; i<n; i++)  
	    {
	     	count=1;
	    	if(a[i])
	    	{
	            for(j=i+1; j<n; j++)  
		        {   
		    	   if(a[i]==a[j])
	    	        {
	                  count++;
	                  a[j]='\0';
		     	    }
		        }  
		           printf(" '%c' = %d \n",a[i],count);
			}
		} 
	}

