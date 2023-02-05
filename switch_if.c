#include<stdio.h>
int main()
{
  int choice;
  int age;
  
  printf("Enter your choice:");
  scanf("%i",&choice);

  printf("Input Age:");
  scanf("%d",&age);

  switch(choice)
   {
    case 1:
      if (age>=1 && age<=18)
      	{
	  	 printf("Not eligible for vote...");
	  	}
      else if (age>=19 && age <=100)
      	{
        printf("you are eligible for vote....");
		}
      break;
      
      case 2:
	  	if (age>=1 && age<=17)
	   		{
	   			printf("you are minor ");
			}
			else if(age>=18 && age<=100)
			{
				printf("You are an adult");
			}
			else
			{
				default:
					printf("Invalid");
			}
			break;
    }
    
return 0;
}