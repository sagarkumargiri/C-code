/*Author   				: sagar kumar giri
 * Date    				: 17/12/2021
 * Input   				: A string with Ctrl-D
 * Sample execution                    : Hello world
				          Dennis Ritchie
					  Linux
					  Character count : 34
					  Line count      : 3
					  Word count      : 5		
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



#include <stdio.h>
#include <ctype.h>



int main()
{
		// variable declaration 
		int character=0,line=0,word=0,flag=0;
		char ch,c;
		puts("Give a string :");
		//loop for get char from standard input buffer untill END OF FILE is encounter
		for( ;(ch = getc(stdin)) !=EOF; )
		{
				//increament no of char 
				character++;
				//condition for space , tab , line  
				if(ch == ' '|| ch == '\t' || ch == '\n')
				{
						//again space or tab or new line encounter then increament the no. of word
						if(ch == ' ' || ch == '\n' || ch == '\t')
						{
								word++;
								//after encounter one word no. of blank are ignore untill another alphabet is counter
								while(getchar() == ' ');
								character++;
						}
				}
				//condition for new line count
				if(ch == '\n')
				{
						line++;
				}

		


		}
		fflush(stdin);
		printf("\nno. of character : %d\nno.of line       : %d\nno.of word       : %d\n", character, line, word);


		return 0;


}
