/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: one interger one string
 * Sample execution  	: 1. Iterative method
						2. Recursive method
						Enter your choice : 2
						Enter a string
						: Hello World
						Reverse string is : dlroW olleH (By Recursion)
						Do you want to continue(Y/y) : n		
====================================================================================================================================*/



#include <stdio.h>
#include <string.h>

//declaration of functions
void reverse_iter(char *str, int stop);
void reverse_recu(char *str, int start, int stop);

int main()
{
		//variable declaration
		int choice,start,stop,len;
		char ch; 
		char str[30];
		do{
				choice = 0;
				//display the menu of string reverse methods
				printf("Choose the method of reverse the string :\n%s\n%s\n"
						, "1. Iterative method"
						, "2. Recursive method");

				printf("Enter your choice : ");
				//taking method of choose  from user
				scanf("%d", &choice);
				//reading the string
				printf("Enter a string    : ");
				scanf(" %30[^\n]s", str);
				//assigning stop and start variable
				//stop variable assigning by the length of the string
				stop = strlen(str);
				start =0;

				//condition for method 1 i.e iteration method
				if(choice == 1)
				{
						//calling reverse string by iteration method
						reverse_iter(str,stop-1);
						printf("Reverse string is : %s  ", str);
						printf("(By Iterative)\n");
				}
				//condition for method i.e recursive method
				else if(choice == 2)
				{
						//calling reverse string by recusive method
						reverse_recu(str,start,stop-1);
						printf("Reverse string is : %s  ", str);
						printf("(By Recursion)\n");
				}
				//error message for invalid option choose
				else
						printf("Error: invalid choice \n");


				//suggest user to try another time
				printf("Do you want to continue(Y/y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch =='Y');
		//termination of program
		return 0;

}
//function definition of iteration method
void reverse_iter(char *str,int stop)
{
		int i = 0;
		//loop for reverse the string 
		while(i <= stop)
		{
				char temp = str[i];
				str[i] = str[stop-1];
				str[stop-1] = temp;
				i++;
				stop--;
		}
}
//function definition of recursive method
void reverse_recu(char *str,int start,int stop)
{
		//exit path of recursion
		if(start >= stop)
		{
				return;
		}
		char temp = str[start];
		str[start] = str[stop];
		str[stop] = temp;
		reverse_recu(str, ++start, --stop);

}
