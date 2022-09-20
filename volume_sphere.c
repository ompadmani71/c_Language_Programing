// Write a C program that calculates the volume of a sphere.

#include<stdio.h>
# define PI 3.14
main()
{
	
	float r,v=0;
	
	printf("Enter redius:-");
	scanf("%f",&r);
	
	v = 4/3 * PI * r * r * r;
	
	printf("Volume of a Sphere = %.2f",v);
}

