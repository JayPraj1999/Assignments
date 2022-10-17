//Area of triangle

#include<stdio.h>

int main()
{
	float area, base, height;
	
	printf("Enter base : ");
	scanf("%f",&base);
	printf("Enter height : ");
	scanf("%f",&height);
	
	area = (base*height)/2;
	
	printf("Area of Circle is : %0.2f",area);
	
	return 0;
}