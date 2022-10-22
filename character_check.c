#include <stdio.h>
int main()
{
	//variable declearation
	char ch;
	//suggest to user enter a character
	printf("Enter a character to check\n");

	scanf("%c", &ch);

	//compare the character whether it is a uppercase or lowercase or digit or special character
	
	if(ch>='A' && ch<='Z')
			printf("The character: %c is an uppercase letter\n", ch);
	else if (ch>='a' && ch<='z')
			printf("The character: %c is an lowercase letter\n", ch);
	else if(ch>='0' && ch<='9')
			printf("The character: %c is a digit\n", ch);
	else
			printf("None the above");
}

