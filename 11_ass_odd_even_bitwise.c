/*Author   				: 	sagar kumar giri
 * Date    				:
 * Input   				:	one integer taking from user
 * Sample execution  	: 	Enter the value of 'N' : 4
							4 is +ve even number
							Do you want to continue(y/Y): y
							Enter the value of 'N' : -5
							-5 is -ve odd number
							Do you want to continue(y/Y): n 					*/





#include <stdio.h>
int main()
{
		//declaration of variable
		int num;
		char ch;


		do{
				//suggest user give a number to check
				printf("Give a number: ");
				scanf("%d", &num);

				//checking the range 
				if(num > -1<<20 && num < 1<<20)
				{
						//checking the number is zero or not
						if(num == 0)
							printf("%d is not an even or odd number\n", num);
						//checking the number is -ve or not
						else if(num >> 31 & 1)
						{
								//checking the the lsb bit is 1 or 0 i.e odd or even
								if(num & 1)
									printf("%d is negative odd number\n", num);
								else
									printf("%d is negative even number\n", num);
						}
						//for a +ve number
						else
						{
								//checking the number is even or odd
								if(num & 1)
									printf("%d is positive odd number\n", num);
								else
									printf("%d is positive even number\n", num);
						}
				}
				else
						printf("The number Out of range\n ");
				



				//suggest user to check another number
				printf("Do you want to continue(y/Y): \n");
				scanf(" %c", &ch);
		}while(ch == 'y' ||ch == 'Y' );


		//terminate the program
		return 0;

}
