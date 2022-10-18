//Find even or odd using ternary operator.

#include<stdio.h>
int main()
{
		int a,even,odd,data;
	
	printf("Enter any value to check : ");
	scanf("%i",&a);
	
	data = (a%2==0) ? even : odd;
	
	if(data==even)
	{
		printf("Given number is Even");
	}
	else
	{
		printf("Given Number is Odd");
	}
		
	
	return 0;
}