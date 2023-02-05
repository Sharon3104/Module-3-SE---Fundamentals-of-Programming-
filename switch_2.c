#include<stdio.h>
int main()
{	
	int class;
	int age;
	
	printf("Enter your choice:");
	scanf("%i",&class);
	
	switch(class)
	{
		case 1: 
		case 2:
		case 3:
		case 4:
		case 5: printf("Working Day");
		break;
		case 6:
		case 7: printf("Holiday");
		break;
		default: printf("Invalid Entry");
		break; 
	}
	return 0;
}