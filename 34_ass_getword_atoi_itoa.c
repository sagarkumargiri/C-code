/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: String, String and Integer 
 * Sample execution  	: 1. getword
						  2. atoi
						  3. itoa
						  Enter your choice : 1
						  Enter a word: Hello
						  You entered Hello and length is 5
						  Do you want to continue (y/Y) : y
						  (Menu to be displayed)
						  Enter your choice : 1
					      Enter a word: Hello World
						  You entered Hello
                          Do you want to continue (y/Y) : y
                          (Menu to be displayed)
                          Enter your choice : 2
                          Enter a numeric string: 12345
                          String to integer is 12345
                          Do you want to continue (y/Y) : n
====================================================================================================================================*/

#include <stdio.h>

//function declaration
int get_word(char *str);
int my_atoi(char *str);
int my_itoa(int n, char *str);

int main()
{
		//variable declaration
		char str[40],ch;
		int choice,res,num;
		do{
				//Display the menu of operation
				printf("Choose a option from given below: \n%s\n%s\n%s\n"
								,"1. getword"
								,"2. atoi"
								,"3. itoa" );
				//taking the operation choose
				printf("Enter your choice : ");
				scanf("%d", &choice);


				switch(choice)
				{
						//case for getword operation
						case 1:
								printf("Enter a word: ");
								//taking the a string from user
								scanf(" %39[^\n]s", str);
								//calling the function get word
								res = get_word(str);
								printf("You entered %s and length is %d\n", str, res);
								break;
						//case for ascii to int operation
						case 2:
								printf("Enter a numeric string: ");
								//taking a string from user
								scanf(" %39[^\n]s", str);
								//calling function ascii to int 
								res = my_atoi(str);
								printf("String to integer is: %d\n", res);
								break;
						//case for int to ascii operation
						case 3:
								printf("Enter a number : ");
								//taking a number from user
								scanf(" %d", &num);
								//calling function int to ascii
								res = my_itoa(num,str);
								printf("Integer to string is: %s and length is %d\n", str, res);
								break;
					   default:
					   			printf("INVALID OPTION CHOOSE\n");
				}
				//suggest user to restart the program
				printf("Do you want to continue (y/Y) : ");
				scanf(" %c", &ch);
		}while(ch =='y' || ch == 'Y');
		return 0;
}
//function definition of get_word
int get_word(char *str)
{
		int i=0;
		while(str[i] != '\0')
		{
				if(str[i] == ' ')
						break;
				i++;
		}
		return i;
}
//function definition of ascii to int 
int my_atoi(char *str)
{
		int i=0, res= 0,sign=1;
		//checking 1st char is -
		if(str[0] == '-')
		{
				sign = -1;
				i++;
		}
		//checking 2nd char +
		else if(str[0] == '+')
		{
				sign = 1;
				i++;
		}

		while(str[i] != '\0')
		{

				//checking char is 0 to 9
				if(str[i] >= 48 && str[i] <= 53)
				{
						res = res*10 + str[i] - 48;
						i++;
				}
				else
						break;
		}

		return res * sign;
}
//function definition of int to ascii
int my_itoa(int n, char *str)
{
		int i,j=0,rem=0;
		//int to ascii conversion
		for(i= 0;n != 0; i++)
		{
				rem = n%10;
				str[i] =(rem+48);
				n/=10;
		}
		str[i] = '\0';
		int len = get_word(str);
		//reversing the string
		while(j<=len)
         {
         		 char temp = str[j];
                 str[j] = str[len-1];
                 str[len-1] = temp;
                 j++;
				 len--;
		 }


		//returning the length of the string
		return i;
}
