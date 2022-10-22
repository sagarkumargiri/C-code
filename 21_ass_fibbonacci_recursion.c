/*Author   				: sagar kumar giri
 * Date    				:
 * Input   				:
 * Sample execution  	: Enter the value of N: 8
						Fibbonacci series using recursive functions is
						0, 1, 1, 2, 3, 5, 8
						Do you want to continue(y/Y) : y
						Enter the value of N: 10
						Fibbonacci series using recursive functions is
						0, 1, 1, 2, 3, 5, 8
						Do you want to continue(y/Y) : y
						Enter the value of N: -21
						Fibbonacci series using recursive functions is
						0, 1, -1, 2, -3, 5, -8, 13, -21
						Do you want to continue(y/Y) : y
						Enter the value of N: -13
						Fibbonacci series using recursive functions is
						0, 1, -1, 2, -3, 5, -8, 13
						Do you want to continue(y/Y) : n		
===============================================================================================================================*/



#include <stdio.h>

//function declaration
int fibbonaci(int n);


int main()
{
		//variable declaration
		int num,power,ve,res;
		char ch;

		do{
				//reading a number from the user
				printf("Enter the value of N: ");
				scanf("%d", &num);
				printf("Fibbonacci series using recursive functions is\n");


				power =1,ve=0;
				if(num < 0)
						ve = -num;
				else
						ve = num;
				//loop for calling fibbonaci recursively 
				for(int i=0;i <= ve;i++)
				{
						res = fibbonaci(i);
						if(num < 0)
								power = -1 * power;
						if(ve < res)
								break;
						printf("%d ", (power *res));
				}

				//suggest user to try another one
				printf("\nDo you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		//termination of the program
		return 0;

}
//function definition
int fibbonaci(int n)
{
		if(n == 0 || n == 1)
		return n;
		else
		return(fibbonaci(n-1) + fibbonaci(n-2));
}
