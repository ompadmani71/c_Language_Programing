// Create user-defined nested functions that find the largest number among the given 3 numbers.

#include<stdio.h>
 
int first()
	{
		int a,b;
		
		printf("b = ");
		scanf("%d",&a);
		
		printf("c = ");
		scanf("%d",&b);
		
		if(a > b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
int three()
	{
		int ans,c;
		
		printf("a = ");
		scanf("%d",&c);
		
		ans = first();
		if(ans > c)
		{
			return ans;
		}
		else
		{
			return c;
		}
	}
int main()
	{
		int ans;
		
		ans = three();
		printf("max = %d\n",ans);
	}

