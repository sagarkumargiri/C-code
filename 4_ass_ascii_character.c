/*Author   				: Sagar kumar Giri
 * Date    				: 8/10/21
 * Input   				: No
 * Output  				: All character in between 0 to 127
 * Sample execution  	                : Dec       Oct         Hex           Ascii
					  ---       ---         ---           -----
					   0        000         00          Non Printable
					   1        001         01          Non Printable
                           			                                 	*/




#include <stdio.h>
int main()
{
		int num;
		char ch;


		printf("Dec\tHex\tOct\tCharacter\n");
		printf("=================================\n");
		for(num=0; num<=127 ; num++)
		{
				//0 to 32 and 127 no. character are non printable
				if (num<=32 || num == 127)
						printf("%d\t%02x\t%03o\tnon printable\n", num, num, num);

				else
						printf("%d\t%02x\t%03o\t%c\n", num, num, num, num);

		}

		return 0;
}
