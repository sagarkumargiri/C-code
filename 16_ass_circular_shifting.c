/*Author   				: sagar kumar giri
 * Date    				:
 * Input   				:
 * Sample execution  	: Enter num: 12
						Enter n : 3
						Possible operations
						1. circular right shift
						2. circular left shift
						Enter your choice: 1
						The binary form of number : 00000000 00000000 00000000 00001100
						After circular right shifting by 3
						The bianry form of number : 10000000 00000000 00000000 00000001
						Want to continue ( y/Y ) : y
						Enter num: -12
						Enter n : 3
						Possible operations
						1. circular right shift
						2. circular left shift
						Enter your choice: 1
						The binary form of number : 11111111 11111111 11111111 11110100
						After circular right shifting by 3
						The bianry form of number : 10011111 11111111 11111111 11111110
						Want to continue (y/Y) : n 		*/



#include <stdio.h>

//fuction declaration
void print_binary(int num);
int right_shift(unsigned int num,unsigned int n);
int left_shift(unsigned int num, unsigned int n);



int main()
{
		//variable declaration
		int no_shift,choice,result;
		unsigned int num;
		char ch;

		do{
				//taking the number
				printf("Enter num: ");
				scanf("%d", &num);
				//taking no of shifting
				printf("Enter no of shifting: ");
				scanf("%d", &no_shift);
				//shfting option display
				printf("Possible operations\n");
				printf("1. circular right shift\n");
				printf("2. circular left shift\n");
				//reading choice
				printf("Enter your choice: ");
				scanf("%d", &choice);
				printf("\n");

				//condition for choosing option right shift
				if(choice == 1)
				{
						printf("The binary form of number : ");
						//calling the function to print the number in binary
						print_binary(num);
						printf("\n");
						printf("After circular right shifting by %d \n", no_shift);
						//calling the function to right shift  
						result = right_shift(num,no_shift);
						printf("The bianry form of number : ");
						//calling the function to print the result in binary 
						print_binary(result);
						printf("\n");
				}

				//condition for choosing option left shift
				else if(choice == 2)
				{
						printf("The binary form of number : ");
						//calling the function to print the number in binary
                        print_binary(num);
                        printf("\n");
                        printf("After circular left shifting by %d \n", no_shift);
                        //calling the function to left shift
                        result = left_shift(num,no_shift);
                        printf("The bianry form of number : ");
                        //calling the function to print the result in binary
                        print_binary(result);
 						printf("\n");
 				}
				//condition for choosing invalid option
				else
						printf("Invalid option choose\n");


				//suggest user to try another option
				printf("Do you want continue(y/Y)\n");
				scanf(" %c", &ch);
		}while(ch == 'y' ||ch == 'Y');
		return 0;

}






//functions defination



void print_binary(int num)
{
		for(int i =31;i>=0;i--)
		{
			if(num >> i & 1)
					printf("1");
			else
					printf("0");
		}
}

//function definition of right shift 
int right_shift(unsigned int num, unsigned int n)
{
	     unsigned int res;

		 res = (num >> n) | (num << 32-n);
		 return res;
	
}

//function definition of left shift
int left_shift(unsigned int num,unsigned int n)
{
		 unsigned int res;
		res = (num << n) | (num >> 32-n);

		return res;
}






























