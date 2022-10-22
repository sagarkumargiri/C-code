#include <stdio.h>
#include <ctype.h>

int length(char *str);

void concatenate_str(char *str1, char *str2);



int main()
{

		char str1[50]; char str2[40];
        //int n,t;
 
        puts("Give 1st string:");
        scanf("%[^\n]s", str1);

        puts("Give 2nd string:");
        scanf(" %[^\n]s", str2);

        concatenate_str(str1,str2);
        puts("After concatenate string2 with string1:");

        puts(str1);

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

void concatenate_str(char *str1, char *str2)
{
		int len,i=0;
		len = length(str1);

		while(str2[i] != '\0')
		{
				str1[len+i] = str2[i];
				i++;
		}
}


