#include <stdio.h>
int main()
{

		// variable declearation
		double num1,num2,result;
		char op;

		// suggest user to give two number 
		printf("Give two number: \n");

		scanf("%lf%lf", &num1, &num2);

		// suggest user to give the an operation symbol to do
		printf("Give symbol of operation to do(+,-,*,/): \n");

		scanf(" %c", &op);

		switch(op)
		{
				case '+':// case for addition operation
						result=num1+num2;
						printf("The addition of %g and %g is: %g\n", num1, num2, result);//using %g to print exact value
						break;
				case'-':// case for subtraction operation
						result=num1-num2;
						printf("The subtraction of %g and %g is: %g\n", num1, num2, result);
						break;
				case'*':// case for multplication operation
						result=num1*num2;
						printf("The multplication of %g and %g is: %g\n", num1, num2, result);
						break;
				case'/':// case for division operation
						result=num1/num2;
						printf("The division of %g and %g is: %g\n", num1, num2, result);
						break;
						
				default:
						printf("invalid operation choose");


		}
		
		return 0;
}
