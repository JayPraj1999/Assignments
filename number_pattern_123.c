//Print Number pattern

#include<stdio.h>

int main()
{

	int row,col,num=1;
	
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%i ",num);
			num++;
		}
		printf("\n");
	}
	
	return 0;
}