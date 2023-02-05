#include<stdio.h>
int main()
{
	int num; 
	
	printf("Enter Number:");
	scanf("%i",&num);
		if (num > 0)
	{
		printf("The value is a positive number.");
	}
	else if (num < 0)
	{
		printf("The value is a negative number.");
	}	
	else
	{
		printf("Invalid Entry");
	}
}