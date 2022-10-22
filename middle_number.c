#include <stdio.h>
int main()
{
		//variable declearation
		int num1,num2,num3;

		// suggest user to enter three number
		printf("give three number to know which number is middle number\n");
		scanf("%d%d%d", &num1, &num2, &num3);




		// condition for 1st number
		if (num1<num2)

		{
				if(num1>num3)
						printf("the middle number: %d\n", num1);
		}
		else if(num1>num2)
		{
			    if (num1<num3)
				        printf("the middle number: %d\n", num1);
    	}

    	//condition for 2nd number

	    if(num2<num1)
		{
				if(num2>num3)
						printf("the middle number: %d\n", num2);
		}

		else if(num2>num1)
		{
				if (num2<num3)
						printf("the middle number: %d\n", num2);
		}

		//condition for 3rd number
		if(num3<num1)
		{
				if(num3>num2)
						printf("the middle number: %d\n", num3);
		}
		else if(num3<num2)
				printf("the middle number: %d\n", num3);



		return 0;

	
}
