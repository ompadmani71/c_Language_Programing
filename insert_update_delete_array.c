// Write C program to Insert, Delete & Update operations the element into array.


#include<stdio.h>

	main()
	{
 		int i,n,pos,val;
 		printf("How many element in array:-");
 		scanf("%d",&n);
        
        int a[n];                                      
 		for(i=0; i<n; i++)
 		{
  			printf("a[%d]=",i);
  			scanf("%d",&a[i]);
 		}

		printf("enter position =>");
		scanf("%d",&pos);
		printf("enter value for insert =>");
		scanf("%d",&val);

		for(i=n-1; i>=pos; i--)
		{
		a[i+1]=a[i];
		}
		a[pos]=val;
		n++;
		
			for(i=0; i<n; i++)
			{
				printf("%d\n",a[i]);
			}

}


