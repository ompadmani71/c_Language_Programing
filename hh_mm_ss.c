// Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>
main()
{
	int h,m,tm=0;
	
	printf("Enter Hour :");
	scanf("%d",&h);
	
	printf("Enter minute :");
	scanf("%d",&m);
	
	tm = (h * 60) + m;
	
	printf("Total Minutes : %d",tm);
}

