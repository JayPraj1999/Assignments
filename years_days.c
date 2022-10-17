//create a program to convert into days into year and year into days.

#include<stdio.h>

int main()
{
	
	int year,days,month,choice;
	
	printf("\nEnter 1 For convert years into day : \n");
	printf("\nEnter 2 For convert days into year : \n");
	
	scanf("%i",&choice);
	
	switch(choice)
	{
		case 1:{
			printf("\nEnter years : ");
			scanf("%i",&year);
	
	
			days = year * 365;
	
			printf("\nTotal days are : %i",days);
			break;
		}
			
		case 2:{
			
			printf("\nEnter days : ");
			scanf("%i",&days);
	
			year = days / 365;
			days = days % 365;
	 
			printf("\nTotal days are : %i",year);
			printf("\nRemain days are : %0.i",days);
			break;
		}
					
		
		
		default:
			printf("Invalid Choice...!");
	}
	

	
	return 0;
}