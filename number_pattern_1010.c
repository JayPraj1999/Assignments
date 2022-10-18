//Print Number pattern

#include<stdio.h>

int main()
{
//	char ch='a'
	int row,col,num=0;
	
	
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	return 0;
}