/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: two integer
 * Sample execution  	: Enter a number num1 : 10
						Enter a number num2 : 20
						After swapping,
						num1 = 20  num2 = 10
						Do you want to continue(y/Y) : n 		*/


#include <stdio.h>


//function declaration
void swap(int *num1,int *num2);


int main()
{
		//variable declaration
		int num1,num2;
		char ch;

		do{
				//reading 1st number from user
				printf("Enter a number num1 : ");
				scanf("%d", &num1);
				//reading 2nd number from user
				printf("Enter a number num2 : ");
				scanf("%d", &num2);

				//calling the function for swaping two number
				swap(&num1,&num2);
				printf("After swapping,\n");
				printf("num1 = %d num2 = %d\n", num1, num2);


				//suggest user to try another one
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch =='y' ||ch =='Y');

		//termination of program
		return 0;
}

//function definition
void swap(int *num1,int *num2)
{
		*num1=*num1 ^ *num2;
		*num2= *num1 ^ *num2;
		*num1= *num1 ^ *num2;
}

