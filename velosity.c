// Write a C program to find velocity of given speed and time.

#include<stdio.h>
main()
{
	
	float sp,ti,v=0;
	
	printf("Enter speed :");
	scanf("%f",&sp);
	
	printf("Enter time :");
	scanf("%f",&ti);
	
	v = sp / ti;
	
	printf("Velosity = %.2f",v);
}

