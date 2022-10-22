/*Author   				: sagar kumar giri
 * Date    				:
 * Input   				:
 * Sample execution  	: Enter a number: 8
 *                        0, 1, 1, 2, 3, 5, 8
 *                        Do you want to continue (y/Y) : y
 *                        Enter a number: 10
 *                        0, 1, 1, 2, 3, 5, 8
 *                        Do you want to continue (y/Y) : y
 *                        Enter a number: -21
 *                        0, 1, -1, 2, -3, 5, -8, 13, -21
 *                        Do you want to continue (y/Y) : y
 *                        Enter a number: -13
 *                        0, 1, -1, 2, -3, 5, -8, 13
 *                        Do you want to continue (y/Y) : y
 *                        Enter a number: 2000000
 *                        Error : Number out of range, please enter the value -2^20 < 'N' < 2^20
 *                        Do you want to continue (y/Y) : n  */









#include <stdio.h>
int main()
{
		//variable declaration
		int Nth,previous,next,result,power;
		char ch;


		do{
				//suggest user to give a number i.e N which is to print Nth number terms of fibonacci series
				printf("Enter a number:  ");
				scanf("%d", &Nth);
				//initialize the first two term of fibonacci series
				previous = 0;
				next= 1;
				result =0;
				power=1;

				
				//checking the Nth number is in the range or not. The range is -2^20 to 2^20
				//the range is calculate by using bitwise right shift operation 
				if((-(1<<20) < Nth) && ((1<<20) > Nth)) 
				{
						//for positive fibonacci series
						if(Nth > 0)
						{
								switch(Nth)
								{
									case 1:
											printf("0 1 1");
											break;
									default:
											printf("0 1");
											for(int i=1;i<=Nth;i++)
											{
													result = previous + next;
													if(result > Nth)
															break;
													

													printf(" %d", result);
													previous=next;
													next=result;
											}
											printf("\n");
								}
						}
						//for negative fibonacci series
						else
						{
								switch(Nth)
								{
										case -1:
												printf("0 1 -1");
												break;
										default:
												printf("0 1 ");
												for(int i= -1;i>=Nth; i--)
												{
														power=(-1)*power;
														result = previous +next;
														if(result >(-Nth))
																break;
														printf("%d ", power*result);
														previous = next;
														next = result;
												}
												printf("\n");
								}
						}
				}
				else
						printf("Error : Number out of range, please enter the value -2^20 < 'N' < 2^20\n");
				



		

				//suggest user restart program once again
				printf("Do you want to continue (y/Y) : \n");
				scanf(" %c", &ch);
		}while(ch =='y' || ch == 'Y');

		//terminate the program
		return 0;


}
