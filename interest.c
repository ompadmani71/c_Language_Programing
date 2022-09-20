#include<stdio.h>

  main()
  {
  	float p,r,n,i;
  	
  	printf("Principa = ");
  	scanf("%f",&p);
  	
  	printf("\nRate of Interest = ");
  	scanf("%f",&r);
  	
  	printf("\nTime in Mounth = ");
  	scanf("%f",&n);
  	
  	i = p * r * n / 100;
  	
  	printf("Simple Interest of = %.2f",i);
  	
  	
  }
