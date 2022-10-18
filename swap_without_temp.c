// Swapping without Using third variable.

#include<stdio.h>

int main()
{
	
	int a=55, b=66;
	
	printf("befor swapping :\n a = %i\n b = %i",a,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nAfter swapping :\n a = %i\n b = %i",a,b);
	
	return 0;
}