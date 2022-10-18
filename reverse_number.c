//Print Reverse Number.
#include<stdio.h>

int main()
{

	int a,mod;
	printf("Enter number to print : ");
	scanf("%i",&a);
	while(a != 0)
	{
		
		mod = a%10;
	
		printf("%i",mod);
		
		a = a/10;
		
		
	}

	return 0;
}