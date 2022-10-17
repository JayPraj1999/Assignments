//Find leap year or not

#include<stdio.h>

int main()
{
	
	int year;
	
	printf("Please enter year : ");
	scanf("%i",&year);
	
	if(year%4==0  && year!=100 )
	{
		printf("leap year..!");
	}
	else
	{
		printf("Not Leap Year...!");
	}
	return 0;
	
}