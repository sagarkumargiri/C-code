/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: Array of N Integers, N 
 * Sample execution  	: Enter the no.of elements : 10
							1. Static allocation
							2. Dynamic allocation
							Enter your choice : 1
							Enter the 10 elements:
							[0] -> 9
							[1] -> 12
							[2] -> 15
							[3] -> 18
							[4] -> 20
							[5] -> 22
							[6] -> 23
							[7] -> 24
							[8] -> 26
							[9] -> 31
						Output :
						x(input)
						D = X - Mean		D 2
						9		-11			121
						12		-8			64
						15		-5			25
						18		-2			4
						20		 0			0
						22		 2			4
						23		 3			9
						24		 4			16
						26		 6			36
						31		 11			121
						Sum = 200	  Sum = 400
						The Variance of the entered numbers is 40
						Do you want to continue(y/Y) : N 		
====================================================================================================================================*/


#include <stdio.h>
#include <stdlib.h>


//function declaration
int variance_calculation(int size, int *arr);

int main()
{
		//variable declaration
		int choice,n,var;
		char ch;
		do{
				//taking the no. of element
				printf("Enter the no.of elements : ");
				scanf("%d", &n);
				//Display the menu of type memory allocation
				printf("Enter method :\n%s\n%s\n%s"
								,"1. Static allocation"
								,"2. Dynamic allocation"
								,"Enter your choice : ");
				//taking selection from user
				scanf("%d", &choice);
				//condition for static memory allocation
				if(choice == 1)
				{
						//declaration array with n element
						int arrs[n];
						//calling the function for variance calculation
						var = variance_calculation(n,arrs);
						printf("The Variance of the entered numbers is : %d\n", var);
				}
				//condition for dynamic memory allocation
				else if(choice == 2)
				{
						//declaration of a pointer 
						int *arrd;
						//dynamic memory allocation of n*4
						arrd = malloc(n*sizeof(int));
						//Error handling of memory allocation
						if(arrd == NULL)
						{
								printf("memory alloction failed.\n");
								free(arrd);
								return 1;
						}
						else
						{
								//calling variance calculation function
								var = variance_calculation(n,arrd);
								printf("The Variance of the entered numbers is : %d\n", var);
								free(arrd);
						}
				}
				else
						printf("ERROR: invalid option\n");
				//suggest user to restart the program
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;

		
}

//function defination of variance calculation
int variance_calculation(int size, int *arr)
{
		int var,D,DD,sum_DD=0;
		printf("Enter the %d elements:\n", size);
		//element reading
		for(int i =0; i<size;i++)
		{
				printf("[%d]--> ", i);
				scanf("%d", &arr[i]);
		}
		//calculation summation of all element
		int sum =0;
		for(int i=0;i<size;i++)
		{
				sum = sum + arr[i];
 		}
 		//calucalating mean of D array
 		int mean = sum/size;

 		printf("output\n");
		printf("\n   x(input)\tD = X - Mean\tD*D\n");
		printf("-------------------------------------\n");
		//calculating D*D array and sum of all element of D*D
		for(int i=0;i<size; i++)
		{
				D = arr[i]-mean;
				DD = D*D;
				sum_DD = sum_DD + DD;
				printf("%9d %14d %10d\n", arr[i], D, DD);

		}
		printf("-------------------------------------\n");
		printf("sum = %d %18s = %d\n", sum,"sum", sum_DD);

		//calculating Variance
		var = sum_DD/size;

		return var;

}
