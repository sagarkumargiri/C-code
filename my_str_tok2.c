#include <stdio.h>
#include <ctype.h>
#include <string.h>


char* str_tok(char* s, char* d);

int main()
{
		char str[50]="sagar//kumar...giri//";
		char del[30] = "./";

		puts(str);
		puts(del);

		char *ptr;

		ptr = str_tok(str,del);

		int i=0;
		while(ptr == NULL)
		{
				printf("%s\n", ptr);
				ptr = str_tok(ptr,del);
				i++;
		}

		return 0;
}

char* str_tok(char* s, char* d)
{
		static char* input;
		input = s;
		char arr[strlen(s)+2];
		char* result = arr;
		int i=0, j=0;

		for( ;d[i] != '\0'; i++)
		{
				for( ; input[j] != '\0';j++)
				{
						if(d[j] != input[i])
						{
								result[j] = input[j];
								puts("n");
						}
						else
						{
								puts("y");
								input[j] ='\0';
								input = input + j + 1;
								return result;
						}

				}
		}
}
