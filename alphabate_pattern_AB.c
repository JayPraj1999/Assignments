//Print Number pattern

#include<stdio.h>

int main()
{

	
	int row,col;
	
	
	for(row='A';row<='Z';row++)
	{
		for(col='A';col<=row;col++)
		{
			printf("%c ",col);
						
		}
		printf("\n");
	}
	return 0;
}