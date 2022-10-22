#include <stdio.h>
int main()
{
	//variable declear
	int num1,num2,num3;

	//suggest user to give three number
	printf("give three number one by one\n ");

	scanf("%d%d%d", &num1, &num2, &num3);

	if (num1>num2)
	{
	  if (num1>num3)
	  		  printf("the number: %d is greatest number\n", num1);
	  else
	  		  printf("the number: %d is greatest number\n", num3);
	  
	}

	else
	{
	  if (num2>num3)
	  		  printf("the number: %d is greatest number\n", num2);
	  else
			printf("the number: %d is greatest number\n", num3);
	}

		
	return 0;

}
