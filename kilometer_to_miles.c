//Write a C Program to convert kilometer in miles and vise verse based on user input.

#include<stdio.h>
main()
{
	int km;
	float miles=0;
	
	printf("Enter Kilometer :");
	scanf("%d",&km);
	
	miles = km * 0.621;
	
	printf("Miles = %.2f",miles);
}

