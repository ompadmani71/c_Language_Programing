//Write C Program to find gross salary.
//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
//Ans = 123 RS

#include<stdio.h>
main()
{
	int bsalary,hra=0,da=0,tax=0,tsalary=0;
	
	printf("Enter salary :");
	scanf("%d",&bsalary);
	
	hra = bsalary / 10;
	da = bsalary * 0.05;
	tax = bsalary * 0.08;
	
	tsalary = bsalary + hra + da + tax;
	
	printf("Gross salary : %d",tsalary);
}

