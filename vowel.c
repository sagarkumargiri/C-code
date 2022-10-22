#include <stdio.h>
int main()
{

		//declear variable
		char al;

		// suggest the user to give an alphabet
		printf("Give an alphabet to check whether it is a vowel: ");
		scanf("%c", &al);

		switch (al)
		{
				//condition for lowercase alphabet
				case 'a':
						printf("The alphabet %c is a vowel\n",al);
						break;
				case 'e':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'i':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'o':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'u':
						printf("Thw alphabet %c is a vowel\n", al);
						break;

				//condition for uppercase alphabet
				case 'A':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'E':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'I':
						printf("The alphabet %c is a vowel\n", al);
						break;
				case 'O':
						printf("The alphabet %c is a vowel\n",al);
						break;
				case 'U':
						printf("The alphabet %c is a vowel\n", al);
						break;

				//condition for other then vowel 
				default:
						printf("The alphabet %c is a consonant\n", al);
		}

		return 0;
}
