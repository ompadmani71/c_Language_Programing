// Create a user defined function to find simple Interest, with Principal amount, no. of years, and rate as parameters.


#include<stdio.h>
 
int fact(int p, int r, int n)
	{
		int s;
		s= (p * r * n) / 100;
		return s;
	}
int main()
	{
		int p,r,n,ans;
		printf("Enter values\n\n");
		printf("p = ");
		scanf("%d",&p);
		
		printf("r = ");
		scanf("%d",&r);
		
		printf("n = ");
		scanf("%d",&n);
		
		ans = fact(p,r,n);
		printf("simple Interest = %d\n",ans);
	}



