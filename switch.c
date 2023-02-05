#include<stdio.h>
int main()
{
	int choice;
	
	printf("Enter the choice:");
	scanf( "%i",&choice);
	
	switch(choice)
	
	{
		case 1: printf("Good Morning");
		break;
		
		case 2: printf("Good Evening");
		break;
		
		default: printf("Good Ninght");
	return 0;
	}
}