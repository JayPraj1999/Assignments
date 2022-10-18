//Print pyramid pattern.

#include<stdio.h>
int main()
{
	
	int row,col;
	for(row=6;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf(" ");
		}
		for(col=6;col>=row;col--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}