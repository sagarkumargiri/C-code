/*Author   				: sagar kumar giri
 * Date    				:
 * Input   				:
 * Sample execution  	:Enter a number lines: 5
						Hello     Hello
					     Hello   Hello
						  HelloHello
						 Hello  Hello
						Hello    Hello
                        Do you want to continue(y/Y) : y
                        Enter a number lines: 32
                        Number out of range
                        Do you want to continue(y/Y) : y
                        Enter a number lines: 6
                        Hello    Hello
                         Hello  Hello
                          HelloHello
                          HelloHello
                         Hello  Hello
                        Hello    Hello
                        Do you want to continue(y/Y) : y
                        Enter a number lines: -3
                        Enter only positive values 		*/



#include <stdio.h>

int main()
{
		//decleration of variable
		int no_row;
		char ch;

		

		do{
				
				//suggest user to give the no. of row to be printed
				printf("Give number rows to be print: ");
				scanf("%d", &no_row);


	
				//checking the enter number is in the range i.e 2^5
				//here i am using right shift operator to calculate 2^5 == 1<<5
				if(1<<5 <= no_row)
						printf("Error: Number out of range\n");
				//checking the number is positive or negative
				else if(no_row<0)
						printf("Error: Enter only positive values\n");
				//checking the number is less then 3
				else if(no_row < 3)
						printf("Error: Number should be grearter then 2 to draw the X-pattern\n");
				else
				{
						/*checking the no. of row is even or odd using bitwise operator 
						if the number is odd then the binary value of that number must be  have 1's in the LSB bit
						if the number is and operation with 1 then then it return the LSB value
						if the return value is 1 then the number is odd or it return o then the number is even*/
						if(no_row &1)
						{
								/*The number is an odd number so the X pattern will be different from an even number
								The pattern has one middle line and the pattern will draw using two different neasted for_loop
								one neasted for_loop is for upper side and another neasted for_loop for lower side*/

								//Upper side loop has (no. of row / 2 + 1) number of row
								for (int i = 0; i<=((no_row/2)) ; i++)
								{
										for(int j= 0; j <= no_row ; j++)
										{
												if (j == i || j == (no_row-i))
														printf("hello");
												else
														printf(" ");
										}
										printf("\n");
								}

								//lower side loop has half of the no. of row in a reverse order
								for(int k = (no_row/2 - 1); k>=0 ; k-- )
								{
										for(int l=0; l <= no_row ; l++)
										{
												if(l==k || l ==(no_row-k))
														printf("hello");
												else
														printf(" ");
										}
										printf("\n");
								}
						}

						//for an even number the pattern will be different the middle line will print two times
						else
						{
								//For an even number of row one neasted for_loop is use 
								for(int i=no_row;i>=1; i--)
								{
										for(int j=1;j<= no_row;j++)
										{
												if(j==i || j ==(no_row +1 -i))
														printf("hello");
												else
														printf(" ");
										}
										printf("\n");
								} 
						}
				}


						//suggest user to run this program once again
						printf("Do you want to continue(y/Y): ");
						getchar();
						scanf(" %c", &ch);
			
			// checking the character if it is y or Y then run the program once again 		
			}while(ch == 'y' || ch == 'Y');


		
				// terminate the program 
				return 0;

	
}
