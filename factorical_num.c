//Factorial number

#include<stdio.h>
int main()
{
	int a,fact,store=1;
	
	printf("Enter value to find factorial number : ");
	scanf("%i",&fact);
	
	for(a=fact;fact>=1;fact--)
	{
		
	//	store = fact + 0;
		store = fact * store;
	
	}
	printf("%i",store);
	
	return 0;
}