/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: a integer
 * Sample execution  	: Enter the value of N : 5
						  Enter the operation :
							1. Pre-Increment
							2. Post-Increment
						  Choice : 2
						  After post increment ret = 5, num = 6.
						  Do you want to continue(y/Y) : n		
 * ========================================================================================================================*/



#include <stdio.h>


//function declaration
int post(int *num);
int pre(int *num);

int main()
{
		//variable declaration
		int num,result,Choice;
		char ch;

		do{
		
				//reading an integer from user
				printf("Enter a number: ");
				scanf("%d", &num);
				//display operation manu
				printf("Enter the operation :\n");
				printf("1. Post-Increment\n");
				printf("2. Pre -Increment\n");
				printf("Choice : ");
				//reading operation choose by user
				scanf("%d", &Choice);
				//condition for post increament
				if(Choice ==1)
				{
						//calling the function of post increament 
						result=post(&num);
						printf("After post increament\n");
						printf("num = %d result = %d\n", num, result);
				}

				//condition for pre increament 
				else if(Choice == 2)
				{
						//calling the function of pre increament
						result=pre(&num);
						printf("After pre increament\n");
						printf("num = %d result = %d\n", num, result);
				}
				//condition for error invalid operation choose
				else
						printf("Invalid operation choose\n");

				//suggest user to try another one 
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);

		}while(ch == 'y' |ch == 'Y');
		//termination of program
		return 0;
}


//function definition of post increament
int post(int *num)
{
		int n=1,result;
		result = *num;

		if(result & 1 == 1)
		{
				
				
				for(n=1;result&n;n=n<<1)
				{
						result=result ^ n;
						printf("1: %d\n", result);
				}
				result= result | n;
				printf("2: %d\n", result);
		}

		else
				result = result | n;

		return result;
}
//function definition of pre increament
int pre(int *num)
{
		int n=1;

		if(*num & 1 == 1)
		{
				for(n =1;*num & n;n =n<<1)
				{
						*num = *num ^ n;
				}
				*num =*num | n;
		}

		else
				*num = *num | n;
		return *num;
}
