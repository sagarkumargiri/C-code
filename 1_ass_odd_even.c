/*Author   						: Sagar kumar giri
 * Date    						: 1/10/2021
 * Input   						: Integer 'N'. Where -2^20 < 'N' < 2^20
 * Sample execution  			: Enter the value of 'n' : -4
 * 								  -4 is -ve even number
								  Do you want to continue(y/Y): y
								  Enter the value of 'n' : 4
								  4 is +ve even number
								  Do you want to continue(y/Y): y
								  Enter the value of 'n' : 2000000
								  Number out of range
								  Do you want to continue(y/Y): y
							      Enter the value of 'n' : 0
								  0 is neither odd nor even
								  Do you want to continue(y/Y): n 				*/




#include <stdio.h>
int main()
{
		
		//variable declearation
		int num,up_range;
		char ch;

		
		
		do{
				
				//suggest user to give number to check odd or even
				printf("Enter a number to check Odd or Even: ");
				scanf("%d", &num);
				up_range=1;

				//range calculation , The given number should be in bet  -2^20 to +2^20 
				for(int i=1;i<=20;i++)
				{
						up_range = 2*up_range;

				}

				//checking the number that lies in range or not.For the lower range here taking negative of upper range i.e 2^20
				if(num < up_range && num >(- up_range))
				{
						//checking the number is postive even or positve odd
						if( num > -1)
						{
								if(num % 2 == 0)
										printf("The number : %d is a postive even\n ", num);
								else
										printf("The number : %d is a postive odd\n", num);
						}

						//checking for number is negative even or negative odd
						else
						{
								if(num % 2 == 0)
										printf("The number : %d is a negative even\n ", num);
								else
										printf("The number : %d is a negative odd\n ", num);
						}
				}

				//The number is not in range 
				else
				printf("The given number is not in range\n");


				//suggest user to try another input
				printf("Try another number tnen type y otherwise type n to exit: \n");
				scanf(" %c", &ch);
		//check whether the user want run this program once again or want to exit
        }while(ch=='y'  || ch == 'Y');

        //terminate the program 
		return 0;


}

