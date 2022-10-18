//Reverse Number

#include<stdio.h>

int main()
{
	
	int remain,quotient,val,privious=0;
	
	printf("Enter any Valude = \n");
	scanf("%i",&val);
	
	while(val != 0) //987  //98 //9
	{
		remain = val%10; //7 8 9
		if(remain >  privious) 
		{
		 	privious = remain; // 9
		}
		 
		
		val = val/10;
	}
	
	printf("Maximum Value is %i",privious);
	return 0;
}