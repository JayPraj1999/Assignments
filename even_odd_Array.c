//Create simple Array and print it.

#include<stdio.h>

int main()
{
	
	int a[10]={};
	int i,even=0,odd=0,addevn=0,addodd=0;
	printf("Enter values :\n\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("\n\nGiven values are : \n\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);

	}
	
	for(i=0;i<10;i++)
	{
		if(a[i] % 2 == 0)
		{
			addevn = addevn + a[i];
			even = even+1;
		}
		else
		{
			addodd = addodd + a[i];
			odd = odd+1;
		}

	}
	
	printf("\nTotal Even numbers is %d\n",even);
	printf("Total odd numbers is %d\n\n\n",odd);
	
	printf("\nTotal addition of Even numbers is = %d\n",addevn);
	printf("\nTotal addition of odd numbers is = %d\n",addodd);

	return 0;
}