/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: 
 * Sample execution  	: 1. Int
						: 2. char
						: 3. short
						: 4. float
						: 5. double
						: 6. string
						: Enter you choice : 1Enter the num1
						: Enter the num2
						: 10
						: 20
						: After Swapping :
						: num1 : 20
						: num2 : 10
						: Do you want to continue (y/Y): n	
========================================================================================================================*/ 



#include <stdio.h>

//defining the macro
#define SWAP(t,x,y) \
{                   \
		t temp = x; \
		x = y;      \
		y = temp;    \
}


int main()
{
		//variable declaration
		int choice;
		char ch;
		//display the menu of data type
		do{
				printf("choose data data type : \n%s\n%s\n%s\n%s\n%s\n"
							, "1. Int"
							, "2. char"
							, "3. short"
							, "4. float"
							, "5. double");

				printf("Enter you choice : ");
				//reading the data type from the user
				scanf("%d", &choice);

				switch (choice)
				{
						//case for invalid option
						default:
							printf("ERROR: invlid option\n");
							break;
						//case for int data type
						case 1:
							{
									//declare two int
									int num1,num2;
									//reading 1st int
									printf("Enter num1: ");
									scanf("%d", &num1);
									//reading 2nd int
								    printf("Enter num2: ");
									scanf("%d", &num2);
									//calling the macro
									SWAP(int,num1,num2);
									printf("After swap:\nnum1 = %d num2= %d\n",num1,num2);
									break;
							}
						case 2:
							{
									//declare two char
									char ch1,ch2;
									//reading 1st char
									printf("Enter ch1: ");
									scanf(" %c", &ch1);
									//reading 2nd char
									printf("Enter ch2: ");
									scanf(" %c", &ch2);
									//calling the macro
									SWAP(char,ch1,ch2);
									printf("After swap:\nch1 = %c ch2= %c\n",ch1,ch2);
									break;

							}
						case 3:
							{
									//declare two short int
									short num1,num2;
									//reading 1st short
									printf("Enter num1: ");
									//reading 2nd short
									scanf("%hi", &num1);
									//reading 2nd short
									printf("Enter num2: ");
									scanf("%hi", &num2);
									//calling the macro
									SWAP(short,num1,num2);
									printf("After swap:\nnum1 = %hi num2= %hi\n",num1,num2);
									break;
							}
						case 4:
							{
									//declare two float
									float num1,num2;
									//reading 1st float
									printf("Enter num1: ");
									scanf("%f", &num1);
									//reading 2nd float
									printf("Enter num2: ");
									scanf("%f", &num2);
									//calling the macro
									SWAP(float,num1,num2);
									printf("After swap:\nnum1 = %f num2= %f\n",num1,num2);
									break;
							}
						case 5:
							{
									//declare two double
									double num1,num2;
									//reading 1st double
									printf("Enter num1: ");
									scanf("%lf", &num1);
									//reading 2nd double
									printf("Enter num2: ");
									scanf("%lf", &num2);
									//calling the macro
									SWAP(double,num1,num2);
									printf("After swap:\nnum1 = %lf num2= %lf\n",num1,num2);
									break;
							}
				}
				//suggest user try another time
				printf("Do you want to continue(y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		//termination of the program
		return 0;

		
}



