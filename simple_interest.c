//Create a program to find simple interest.

#include<stdio.h>
int main()
{
	
	float total,principal,rate,time;
	
	printf("\nEnter Initial Principal Balance : ");
	scanf("%f",&principal);
	printf("\nEnter Annual Interest rate : ");
	scanf("%f",&rate);
	printf("\nEnter time of duration in year : ");
	scanf("%f",&time);
	
	total = principal*(1 + rate*time);
	
	printf("\n\nYour simple interest is : %f",total);
	
	
	return 0;
}