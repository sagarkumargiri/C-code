/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: characters
 * Sample execution  	: Enter a number: 212
						The number is 212
						Do you want to continue (y/Y) : y
						Enter a number: -212
						The number is -212
						Do you want to continue (y/Y) : y
						Enter a number: +212
						The number is 212
						Do you want to continue (y/Y) : y
						Enter a number: 212-
						The number is 212
						Do you want to continue (y/Y) : y
						Enter a number: as212
						The number is 0
						Do you want to continue (y/Y) : y
						Enter a number: 21267jk
						The number is 21267
						Do you want to continue (y/Y) : y
						Enter a number: *212
						The number is 0
						Do you want to continue (y/Y) : n
====================================================================================================================================*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//function declaration
int get_int(char *ch);


int main()
{
		//variable declaration
		char c,c1,ch[10];
		int res,i;

		do{
				
				printf("Enter a number: ");
				//taking character from standard input and store to ch array
				fgets(ch,10,stdin);
				//calling the function to conversion
				res = get_int(ch);
				//printing the final result
				printf("The number is %d\n", res);


				//suggest user restart the program
				printf("Do you want to continue (y/Y) : ");
				c = getchar();
				getchar();
		}while(c == 'y' || c == 'Y');
		//termination of the program
		return 0;
}
//function definition
int get_int(char *ch)
{
		int i=0, res= 0,sign=1;
		//checking for first char of the string is - 
		if(ch[0] == '-')
		{
				//assigning sign to -1
				sign = -1;
				i++;
		}

		//checking for first char of the string is + or not
		else if(ch[0] == '+')
		{
				sign = 1;
				i++;
		}
	
		//converting string to integar
		while(ch[i] != '\0')
		{
	
				//condition for checking character 0 to 9
				if(ch[i] >= 48 && ch[i] <= 53)
				{
						res = res*10 + ch[i] - 48;
						i++;
				}
				//other then 0 to 9 break the loop
				else
						break;
		}

		//returning final result to main function
		return res * sign;
		
		


}
