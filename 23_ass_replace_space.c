/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: String with multispaces between words 
 * Sample execution  	: Enter the string with more spaces in between two words
						  Pointers      are           sharp          knives.
						  String with reduced space:
						  Pointers are sharp knives.
                          Do you want to continue(y/Y) : n
========================================================================================================================*/




#include <stdio.h>
#include <stdlib.h>
void remove_sp(char *ch);

int main()
{
		//variable declaration
		char *ch,ans;
		do{
		
				//dynamic memory allocation for ch pointer with 100 bytes
				ch = malloc(100);
				//condition for dynamic memory allocation is successful
				if(ch != NULL)
				{
						//reading a string with multil no. of space from user
						printf("Enter the string with more spaces in between two words:\n");
						scanf(" %99[^\n]s", ch);
						//calling a function to remove the space
						remove_sp(ch);

						printf("After removeing mutiple space and tap :\n%s", ch);
						//deallocation of memory
						free(ch);
						//assign ch pointer to NULL to avoid dangling pointer
						ch = NULL;
				}
				//Error message for memory allocation failed
				else
				{
						printf("memory allocation failed\n");
						free(ch);
				}

				//to restart the program
				printf("\nDo you want to continue(y/Y): ");
				scanf(" %c", &ans);
		 }while(ans == 'y' || ans =='Y');
		//termination of program
		return 0;
}
//function defination
void remove_sp(char *ch)
{
		//variable declaration
		int i=0,j;
	
		for(i=0;ch[i] !='\0';i++)
		{
				//condition for tab
				if(ch[i] == 9)
						//Tap is replace with space
						ch[i] = 32;
				//conditon for checking back to back space 
				if(ch[i+1] == 32 && ch[i] == 32)
				{
						j=i;
						//loop for shifting element
						while(ch[j] !='\0')
						{
								ch[j] = ch[j+1];
								j++;
						}
						i=0;
				}
		}
		//at the end assigning null character at last
		ch[i] ='\0';
		
}
