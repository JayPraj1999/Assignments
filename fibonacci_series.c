//Print Fibonacci Series.

#include<stdio.h>

int main()
{
	
	int a,b,c,d,e;
	
	printf("How many values do you want to print : ");
	scanf("%d",&e);
	b=0;
	c=1;
	printf("%i %i ", b,c);
	for(a=2;a<e;a++)
	{
		d=b+c;
		printf("%i ",d);
		
		b=c;
		c=d;
	}
	
	return 0;
}