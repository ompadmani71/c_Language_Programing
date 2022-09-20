// Write C program to left rotate and right rotate an array.


#include<stdio.h>
main()
{
	int i,n,j,k,choice,temp=0;
	
	printf("Enter Array size...");
	scanf("%d",&n);
	
	printf("Enter elements :\n\n");
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	

	
	printf("Right rotat then press 1\n");
	printf("Left rotat then press 2\n\n");
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	printf("Enter rotate times...\n");
	scanf("%d",&k);
	
	switch(choice)
	{
		case 1:
			
			for(i=0; i<k; i++)
			{
				temp = a[0];
				
				for(j=0; j<n-1; j++)
				{
					a[j] = a[j+1];
				}
				a[n-1] = temp;
			}
			
			printf("Left rotate array...\n");
			
			for(i=0; i<n; i++)
			{
				printf("%d ",a[i]);
			}
			break;
			
		case 2:
			
			for(i=0; i<k; i++)
			{
				temp = a[n-1];
				
				for(j=n-1; j>0; j--)
				{
					a[j] = a[j-1];
				}
				a[j] = temp;
				
				printf("Right rotate array...\n");
				
				for(i=0; i<n; i++)
				{
					printf("%d ",a[i]);
				}
			}
			break;
			
			
		default: 
		
		printf("Invalid choice ..!");
	}

}


