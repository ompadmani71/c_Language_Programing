#include<stdio.h>

//Write a C program to inplut any character and check whether it is the alphabet, digit, or special character.
main(){ 
	char i;
	
		printf("Enter Any Digit,Alphabet,Special character:-");
		scanf("%c",&i);
	
		if('0' <= i && i <= '9')
		{
			printf("You are enter a Digit");
		}
		else if('a' <= i && i <= 'z')
		{
			printf("You are enter a Alfabete");
		}
		else
		{
			printf("You are enter a Special  Character");
		}
}   

