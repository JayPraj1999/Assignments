//Print Number pattern

#include<stdio.h>

int main()
{

	
	char row,col,max='A';
	
	
	for(row='A';row<='E';row++)
	{
		for(col='A';col<=row;col++)
		{
			printf("%c ",max);
			max++;
						
		}
		printf("\n");
	}
	return 0;
}