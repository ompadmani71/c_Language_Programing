#include<stdio.h>

	main()
	{
		int a,b,c;
		
		   printf("Enter Noumber:-");
		   scanf("%d %d",&a ,&b);
		   
		   printf("\nBefore Swapping....");
		   printf("\na = %d",a);
		   printf("\nb = %d",b);
		   
		   c = a;
		   a = b;
		   b = c;
		   
		   printf("\nAfter Swapping....");
		   printf("\na = %d",a);
		   printf("\nb = %d",b);
		
		
	}
