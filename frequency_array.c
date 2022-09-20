// Write C program to count frequency of each element in an array.

#include <stdio.h>

 main()
{
 	int n, i, j, count;
	
	printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n],f[100];
   

    printf("Enter elements in array: \n");
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ",i);
		scanf("%d", &a[i]);
		f[i] = -1;
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
           
            if(a[i] == a[j])
            {
                count++;
                f[j] = 0;
            }
        }

        
        if(f[i] != 0)
        {
            f[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }

    
}

