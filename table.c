//create a table.

#include<stdio.h>

int main()
{
	int a,ask;
	printf("Enter the Choice for the table : ");
	scanf("%i",&ask);	
	for(a=1;a<=10;a++)
	{
	//	printf("%i,",ask);
		printf("%i X %2i = %i\n",ask,a,a*ask);
	}
	return 0;
}