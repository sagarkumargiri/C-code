/*Author					: sagar kumar giri
 * Date						: 16/10/2021
 * Input					: taking a integer from user
 * Sample execution  		:Enter the number : 12
							+12 -> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
							-12 -> 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0 0
							Do you want to continue(y/Y): 					*/







#include <stdio.h>
int main()
{
		//declaration of variable 
		int num;
		char ch;

		do{
				//Taking a number from user
				printf("Give a number:");
				scanf("%d", &num);

				//checking the number is in range or not
				if(num > -(1<<20)  && num< (1<<20))
				{
					//print the binary value of that number
					printf(" %d = ",num);
					for(int i = 31; i>=0 ;i--)
						{
								if((num >> i)&1)
										printf("1");
								else
										printf("0");
						}
					printf("\n");

					//convert the num to -ve to +ve or +ve to -ve 
					num = ~num + 1;
					//printing the converted binary value of that number
					printf("%d = ",num);
					for(int i =31;i>=0;i--)
					{
							if((num >>i) &1)
									printf("1");
							else
									printf("0");

					}
				}
				else
						printf("The is out of range\n");
				printf("\n");

				//suggest user to check another number
				printf("Do you want to continue :  \n");
				scanf(" %c", &ch);

		}while(ch =='y' ||ch =='Y');

		return 0;
}
