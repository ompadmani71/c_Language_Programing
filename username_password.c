/* Write a C program to check if a given string is a valid password or not by satisfying given criteria:
a. A password must be at least 6 characters long.
b. A password must contain at least one alphabet, one digit, and a special character.
c. Confirmation password feature must be available for double-checking.
Print Valid Password if a password satisfies all given criteria, otherwise print Invalid Password.*/

#include<string.h>
#include<stdio.h>

	main()
	{
		char st[100],st1[100];
		int i,n,n2,a=0,b=0,c=0,d=0;
		

	
		
		printf("Building a password :\n");
		
		printf("1. A password must be at least 6 characters long.\n");
		printf("2. A password must contain at least one alphabet, one digit, and a special character.\n\n");
		
		printf("Enter Password :");
		gets(st);
		
		printf("\nComfirm password...");
		gets(st1);
		
		n = strlen(st);
		n2 = strlen(st1);
		
		if(n >= 6)
		{
			if(st == st1)
			{
				for(i=0;st[i]!='\0';i++)
				{
					if(st[i] >= '0' && st[i] <= '9')
					{
						a++;
					}
		else if(st[i] >='a' && st[i] <= 'z' || st[i] >= 'A' && st[i] <= 'Z')
					{
						b++;
					}
					else
					{
						c++;
					}
				}
			}
			else
			{
				printf("counform password not same... pleass retype password... ");
			}
		}
		
		if(a >= 1 && b >= 1 && c >= 1 && strcmp(st,st1) == 0)
			{
				printf("\nValid Password...");
			}
		else
			{
				printf("\nInvalid Password...");
		}	
		
	
	}




