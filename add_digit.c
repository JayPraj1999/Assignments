//Add first and last digit in the given number

#include<stdio.h>
int main()
{
	
	int val,rem,rem1;
	
	printf("Enter value : ");
	scanf("%i",&val);
	
	while(val != 0)
	{
		
		rem = val%10;
		rem1 = rem;
		val = val/10;
		break;
	}
	
	while(val != 0)
	{
		
		rem = val%10;
		val = val/10;
	}
	printf("%i",rem1+rem);
	
	return 0;
}