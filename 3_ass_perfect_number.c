/*Author   				: Sagar kumar giri
 * Date    				: 12/10/2021
 * Input   				: A postive interger num <= 2^20
 * Sample execution		        : Enter a number: 6
 * 					  Yes, entered number is perfect number
					  Do you want to continue (y/Y) : y
				      	  Enter a number: 10
					  No, entered number is not a perfect number
					  Do you want to continue (y/Y) : y
				          Enter a number: -1
					  Error : Invalid Input, Enter only positive number
					  Do you want to continue (y/Y) : y
					  Enter a number: 2000000
					  Number out of range
					  Do you want to continue (y/Y) : n	*/





#include <stdio.h>
int main()
{
		//variable declearation
		int num,result,range;
		char ch;


		do{

				//suggest user to enter number to check for perfect number
				printf("Enter a number to check perfect number:  ");
				scanf("%d", &num);
				result=0,range=1;

				//range calculation
				for(int i=1; i<=20 ;i++)
				{
						range = range*2;
				}
	

				//checking whether it is a postive number , negitive number or zero
				if(num <= 0)
				{
						printf("Give positive number only the negative are not perfect number:%d\n", num);
				}

				else
				{
						//checking the number is in range or not
						if(num < range )
						{
								//finding the divisors of the enter number
								for(int i = 1; i<=num ;i++)
								{
										//checking the divisors
										if(num % i == 0)
										{
												//storing the sum of divisors of that number
												result = result + i;
												/*checking summation is equal to the number if yes it is a perfect number & exit from loop
												 don't need to further calculation for divisors */
												if(result == num)
												{
														printf("Yes, The number: %d is a perfect number\n", num);
														break;
												}
										}
								}
								// after checking all divisors Addition of that number , checking for number is not perfect number   
								if(num != result)
										printf("No,The number :%d is not a perfect number\n", num);
						}
						else
								printf("Error: The number : %d is not in range\n", num);
				}


		
				//suggest user to try another input 
				printf("Do you want to try another number then enter y\n: ");
				scanf(" %c", &ch);

		//checking for whether user restart the the program or to exit 
		}while(ch == 'y' || ch == 'Y');

		//terminate the program
		return 0;

}
