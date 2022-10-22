#include <stdio.h>
#include <ctype.h>
#include <string.h>

int length(char *str);

void reverse_str(char *str1, char *re_str);

int main()
{
		printf("Give a string : ");
		char str[40];
		scanf("%[^\n]s",str);
		//fgets(str,39,stdin);

		//puts(str);

		//int len = length(str);
		//printf("length = %d", len);
		char re_str[40];
		reverse_str(str,re_str);

		puts("After reversing the string");
		puts(re_str);
		puts("main string:");
		puts(str);
		//printf("%s", re_str);
		return 0;
}


int length(char *str)
{
		int len=0,i=0;
		while(str[i] != '\0')
		{
				len++;
				i++;
		}

		return len;
}

void reverse_str(char *str1, char *re_str)
{
		int len, i;

		len = length(str1) //strlen(str1);            //length(str1);

		for(i=0; *(str1+i) != '\0';i++)
		{
				*(re_str+i) = *(str1+(len-i-1));
				//printf("%d %d\n", i, len);
		}
}
