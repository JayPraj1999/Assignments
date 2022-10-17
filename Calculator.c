//Make a simple calculator using switch case statement.

#include<stdio.h>

int main()
{
	
	char choice; 
	int a,b;
	
	printf("What you want to do : ");
	scanf("%c",&choice);
	
	printf("Enter value of A : ");
	scanf("%i",&a);
	printf("Enter value of B : ");
	scanf("%i",&b);
	
	
	
	switch(choice)
	{
		case '+' : printf("Addition is : %i",a+b);
		break;
		
		case '-' : printf("Subtraction is : %i",a-b);
		break;
		
		case '*' : printf("Multiplication is : %i",a*b);
		break;
		
		case '/' : printf("Division is : %i",a/b);
		break;
		
		case '%' : printf("Modulo is : %i",a%b);
		break;
		
		default:
			printf("Invalid Choice...!");
	}
	
	
	return 0;
}