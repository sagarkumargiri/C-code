/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: A real number
 * Sample execution  	: Enter the Choice:
						1. float
						2. doubleChoice: 1
						Enter the float value: 2.3
						Sign 		Exponent					Mantissa
					------------------------------------------------------------------------------------
						0		1 0 0 0 0 0 0 0		0 0 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1
						Do you want to continue (y/Y) : n		
==================================================================================================================================*/


#include <stdio.h>

//function declaration
void print_bit(void *ptr, int size);

int main()
{
		//variable declaration
		int choose;
		double d; 
		float f;
		char ch;
		//display the menu of data type
		do{
				printf("Choose an option given below:\n%s\n%s", "1.float", "2.Double\nChoose : ");
				//taking user choice
				scanf("%d", &choose);

				//condition for float data type
				if(choose == 1)
				{
						printf("Give a floating number: ");
						//taking afloat number from user
						scanf("%f", &f);
						//calling the function to print in IEEE format of float number
						print_bit(&f ,32);
				
				}
				//condition for double data type
				else if(choose == 2)
				{
						printf("Give a double number : ");
						//taking a double 
						scanf("%lf", &d);
						print_bit(&d ,64);
				}
				else
						printf("Invalid option choose\n");
				//suggest user restart the program
				printf("Do you want to continue (y/Y) :");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		//termination of program
		return 0;

}
//function definition 
void print_bit (void *ptr, int size)
{
	
		printf("sign \t Exponent \t  Mantissa\n");
		printf("-------------------------------------------------------------\n");
		//condition for float number
		if(size == 32)
		{
				for(int i = size -1; i >=0;i--)
				{
						//pointer is type cast to int then dereferencing
						if(*(int *)ptr >> i & 1 == 1)
								printf("1");
						else
								printf("0");
						//separately print mentissa and expo by a tab
						if(i == 31 || i == 23)
								printf("\t");
				}
				printf("\n");
				
		}
		//condition for double number
		else
		{
				for(int i=64-1;i>=0;i--)
         		{
                 		//pointer is type cast to long int then dereferencing
                 		if(*(long int *)ptr >> i & 1 == 1)
                         		printf("1");
                        else
						 		printf("0");
						//separately print mentissa and expo by a tab
						if(i == 63 || i == 52)
								printf("\t");
				}
				printf("\n");
		}

}

