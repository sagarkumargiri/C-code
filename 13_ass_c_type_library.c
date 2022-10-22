/*Author   					  : sagar kumar giri
 * Date    				      : 25/10/2021
 * Input   					  : A character 
 * Sample execution  		  : Enter the character: a
								Select any option:
								1 - isalpha
								2 - isalnum
								3 - isascii
								4 - isblank
								Enter you choice: 2
								The character 'a' is an alnum character.
								Do you want to continue(y/Y): y
								Enter the character: ?
								Select any option:
								1 - isalpha
								2 - isalnum
								3 - isascii
								4 - isblank
								Enter you choice: 2
								The character '?' is not an alnum character.
								Do you want to continue(y/Y): n					*/



#include <stdio.h>

//functions declaration


//function for checking alphanumeric character
char is_alnum(char ch);
//function for checking alphabet character
char is_alpha(char ch);
//function for checking all ascill character
char is_ascii(char ch);
//function for checking all unprintable character
char is_blank(char ch);
//function for checking the alphabet character is upper case
char is_upper(char ch);
//function for checking the alphabet character is lower case 
char is_lower(char ch);


int main()
{
		//variable declaration
		char ch, ans;
		int	 option,result;

		

		do{
		
				//sugest user give a character
				printf("Give a charater: ");
				scanf(" %c", &ch);
				//result = 0;
				//option =0;
				

				//showing the option to be choose
				printf("choose a of option:\n");
				printf("1.is_alnum\n");
				printf("2.is_alpha\n");
				printf("3.is_ascii\n");
				printf("4.is_blank\n");
				printf("Enter you choice: ");
				scanf("%d", &option);



				//besed on the option choose checking the character
				switch(option)
				{
						//case for alphanumeric 
						case 1:
								result = is_alnum(ch);
								if(result == 1)
										printf("The character %c is an alnum character.\n", ch);
								else
										printf("The character %c is not an alnum character.\n", ch);
								break;
						//case for alphabet		
						case 2:
								result = is_alpha(ch);
								if(result==1)
								{
										printf("The character %c is  an alpha character\n", ch);
										result = is_upper(ch);

										//checking the alphabet is upper case
										if(result==1)
												printf("And also a upper case alpha\n");
										else
												printf("And also a lower case alpha\n");
								}
								else
										printf("The character %c is not an alpha character\n.", ch);
								break;

						//case for all ascii character		
						case 3:
								result = is_ascii(ch);
								if(result==1)
										printf("The character %c is an ascii character.\n", ch);
								else
										printf("The character %c is not an ascii character.\n",ch);
								break;

						//case for all nonprintable character		
						case 4:
								result = is_blank(ch);
								if(result==1)
										printf("The character %c is an blank character.\n", ch);
								else
										printf("The character %c is not an blank character.\n", ch);
								break;

						//case for error
						default:
								printf("You enter an invalid character\n");
				}



				//suggest user to try another character
				printf("Do you want to continue(y/Y): \n");
				scanf(" %c", &ans);
		}while(ans == 'y' ||ans == 'Y');

		return 0;

}



//functions defination

char is_alnum(char ch)
{
		if((ch>=48 && ch<=57) ||(ch>=97 && ch<=122) ||( ch>=65 &&ch <= 90))
				return 1;
}


char is_alpha(char ch)
{
		if(ch >=97 && ch<=122 || ch>=65 && ch<=90)
				return 1;
}


char is_upper(char ch)
{
		if(ch >=65 && ch<=90)
				return 1;
}


char is_ascii(char ch)
{
		if(ch>=0 && ch<=127)
				return 1;
}

char is_blank(char ch)
{
		if(ch>=0 && ch <=32 || ch ==127)
				return 1;
}







