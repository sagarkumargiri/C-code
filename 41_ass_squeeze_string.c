/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: two string
 * Sample execution  	: Enter s1
						: Dennis Ritchie
						: Enter s2
						: Linux
						After squeeze s1 : Des Rtche
						Do you want to continue(y/Y) : n		
====================================================================================================================================*/


#include <stdio.h>

//function declaration
void squeeze_str(char *str1, char *str2);

int main()
{
		//variable declaration
		char str2[20];
		char str1[30];
		char ch;
		do{
				//reading 1st string 
				printf("Give string 1: ");
				scanf(" %29[^\n]s", str1);
				//reading 2nd string consist of remove character of 1st string
				printf("Give string 2: ");
				scanf(" %19[^\n]s", str2);
				//calling the function for squeezing the string
				squeeze_str(str1,str2);
				printf("After squeeze string 1: \n");
				printf("%s\n", str1);
				//suggest user try another time 
				printf("Do you continue(y/Y) :  ");
				scanf(" %c", &ch);
		}while(ch == 'y' || ch == 'Y');
		//termination of the program
		return 0;


}

//function definition 
void squeeze_str(char *str1,char *str2)
{
		 int i;
		 //loop for 1st string element
		for( i=0;str1[i] != '\0';i++)
		{
				//loop for 2nd string element
				for(int j=0;str2[j] != '\0';j++)
				{
						//compare 1st string and 2nd string element
						if(str1[i] == str2[j])
						{
								int k = i;
								//loop for shifting the 1st string element
								while(str1[k] !='\0')
								{
										str1[k] = str1[k+1];
										k++;

								}
								//assigning null at the end of the shifting string
								str1[k] = '\0';
								i=0;
								j=-1;
						}
						

				}
		}

}
