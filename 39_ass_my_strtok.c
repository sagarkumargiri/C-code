/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: two strings
 * Sample execution  	: Enter string1 = Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
						Enter string2 = ;./-:
						Tokens :
						Bangalore
						Chennai
						Kolkata
						Delhi
						Mumbai
						Do you want to continue (y/Y) : n		*/


#include<stdio.h>
#include<stdlib.h>

//function declaration
char *my_strtok(char * s, char *comp);

int main()
{
		//variable declaration
		char s[100],del[20], *p,ch;

		do{
				//reading the string with spicial character
				printf("Enter the input string \n");
				scanf(" %99[^\n]s", s);
				//reading the string of spicial character
				printf("Enter the delimiter string \n");
				getchar();
				scanf(" %19[^\n]s", del);

				//calling the function my_strtok
				p = my_strtok(s,del);
				printf("TOKENS : \n");
				while(p != NULL)
				{
						printf("%s \n", p);
						p = my_strtok(NULL, del);			
				}
				//suggest user to try another one 
				printf("Do you want to continue (y/Y) : ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		return 0;
}

//function definition
char *my_strtok(char * str, char *comp)
{
		//function variable declaration
		static int pos;
		static char *s;	
		int i =0, start = pos;

	// Copying the string for further calls of strtok
	if(str!=NULL)
		s = str;
	
	i = 0;
	int j = 0;
	//loop for not end of string
	while(s[pos] != '\0')
	{
		j = 0;	
		//Comparing of one of the delimiter matches the character in the string
		while(comp[j] != '\0')
		{		
			//Pos point to the next location in the string that we have to read
			if(s[pos] == comp[j])
			{
				//Replace the delimter by \0 to break the string
				s[pos] = '\0';
				pos = pos+1;				
				//start specifies the location from where we have to start reading the next character
				if(s[start] != '\0')
					return (&s[start]);
				else
				{
					// Move to the next string after the delimiter
					start = pos;
					// Decrementing as it will be incremented at the end of the while loop
					pos--;
					break;
				}
			}
			j++;
		}
		pos++;		
	}
	s[pos] = '\0';
	if(s[start] == '\0')
		return NULL;
	else
		return &s[start];
}
