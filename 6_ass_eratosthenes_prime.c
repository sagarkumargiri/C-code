/*Author   			  : sagar kumar giri
 * Date    			  : 7/12/2021
 * Input   			  : A positive integer 'N'. Where 1 < 'N' < 2 20
 * Sample execution   : Enter the value of 'n' : 20
						The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
						Do you want to continue(y/Y) : y
						Enter the value of 'n' : -20
						Invalid Input
						Do you want to continue(y/Y) : y
						Enter the value of 'n' : 2000000
						Number out of range
						Do you want to continue(y/Y) : N 		*/


#include <stdio.h>


int main()
{
		// variable declaration
		int element,sqr;
		char ch;
		int arr[element];


		do{
				//Give the number to print prime number upto that number
				printf("Give the number:");
				scanf("%d", &element);

				//checking for postive number
				if(element >0)
				{
						//checking weather the number is in range
						if(element < (1<<20))
						{
								//storing the array upto that number
								for(int i=0;i<element;i++)
										arr[i]=i+1;
								//finding the approx. square root of that number
								for(int i =2;i<element/2;i++)
								{
										if(i*i <= element)
										{
												sqr = i;
										}
										else
												break;
								}
								//replacing non prime number to zero
								for(int i =1;i<=sqr;i++)
								{
										if(arr[i] != 0)
										{
												for(int j = arr[i]*arr[i];j<=element; j= j+arr[i])
												{
														arr[j-1]=0;
												}
										}
								}
								//printing the prime number
								for(int k=1;k<=element;k++)
								{
										if(arr[k] != 0)
												printf("%d ", arr[k]);
								}
						}
						//error for number is out of range
						else
								printf("Out of range\n");
				}
				//error for negative number
				else
						printf("Invalid input\n");

				//suggest user to try another input
				printf("\nDo you want to continue(y/Y) :\n");
				scanf(" %c", &ch);
		}while(ch=='y' ||ch =='Y');
		return 0;
}
