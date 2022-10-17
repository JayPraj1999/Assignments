//Area of rectangle

#include<stdio.h>

int main()
{
	float area, length, width;
	
	printf("Enter length : ");
	scanf("%f",&length);
	printf("Enter width : ");
	scanf("%f",&width);
	
	area = length*width;
	
	printf("Area of Circle is : %0.2f",area);
	
	return 0;
}