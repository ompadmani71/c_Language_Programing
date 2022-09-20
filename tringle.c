#include<stdio.h>

main()
{
	float b,h,area;
	
	printf("Enter Base and Hight of triangle");
	scanf("%f %f",&b,&h);
	
	area = b * h / 2;
	
	printf("area of triangle = %.2f",area); 
	
	
}
