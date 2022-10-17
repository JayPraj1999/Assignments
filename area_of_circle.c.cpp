//Area of circle

#include<stdio.h>

int main()
{
	float area, redius, pi=3.14;
	
	printf("Enter Redious to Find Area of circle : ");
	scanf("%f",&redius);
	
	area = pi*redius*redius;
	
	printf("Area of Circle is : %0.2f",area);
	
	return 0;
}