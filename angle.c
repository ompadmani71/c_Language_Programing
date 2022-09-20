//Write a C program to find the third angle of a triangle if two angles are given.

#include<stdio.h>
main()
{
	int fa,sa,ta=0;
	
	printf("Input two angles of triangle :");
	scanf("%d%d",&fa,&sa);
	
	ta = 180 - (fa + sa);
    	
	printf("Third angle : %d",ta);
}

