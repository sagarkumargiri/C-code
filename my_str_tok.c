#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* mystrtok(char* str, char d);

int main()
{
		char str[90];
		char d;
		puts("Give a string:");
		scanf("%[^\n]s", str);
		puts("give del character:");
		scanf(" %c", &d);

	getchar();

		char *ptr = mystrtok(str,d);
		
		while(ptr != NULL)
		{
				puts(ptr);
				ptr = mystrtok(NULL,d);
				//puts(ptr);
		}
		puts(str);
		return 0;
}

char* mystrtok(char* str, char d)
{
		static char* input =NULL;

		if(str != NULL)
				input = str;
		if(input == NULL)
				return NULL;
		char new[strlen(input) +1];

		char* result = new;
		int i=0;

		for( ;input[i] != '\0';i++)
		{
				if (input[i] != d)
            			result[i] = input[i];
            	else 
            	{
            			input[i] = '\0';
            			input = input + i + 1;
            			return result;
            	}
		}
		result[i] = '\0';
    	input = NULL;

    	return result;
}
