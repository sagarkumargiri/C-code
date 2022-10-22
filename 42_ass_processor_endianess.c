/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: one integer 
 * Sample execution  	: Enter any number : 124
						: Little Endian system
						: Do you want to continue(y/Y) : y
						: Enter any number : 0
						: Little Endian system
						: Do you want to continue(y/Y) : n 		
=============================================================================================================================*/


#include <stdio.h>



int main()
{
		//variable declaration
		int num,LSB;
		char *ptr;
		char ch;

		do{
				//reading a integer
				printf("Enter any number : ");
				scanf("%d" , &num);
				//assigning the number to a char pointer
				ptr = &num;

				//compare the number after to type cast to char with contains of char pointer
				if((char)num == *ptr)
						//both are same mean it is a little endian system
						printf("Little Endian system\n");
				//for big endian system
				else
						printf("Big Endian system\n");

				//suggest user try another time
				printf("Do you want to continue(y/Y):  ");
				scanf(" %c", &ch);
		}while(ch =='y' || ch == 'Y');
		return 0;

}


