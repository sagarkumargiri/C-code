#include <stdio.h>
int main()
{

		//variable declearation
		char ch;
		
		//suggest user to give a character
		printf("Give a character to test it: ");

		scanf("%c", &ch);//taking a input from user

		switch (ch)
		{
		
				case 'A' ... 'Z':// case for uppercase letter A to Z
						printf("The character is uppercase letter: %c\n", ch);
						break;
				case 'a' ... 'z':// case for lowercase letter a to z
						printf("The character is lowercase letter: %c\n", ch);
						break;
				case '0' ... '9':// case for digit 0 to 9
						printf("The character is a digit: %c\n", ch);
						break;
				default://case for special character
						printf("The character is a special character: %c\n", ch);


		}

		return 0;


}
