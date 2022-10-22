#include <stdio.h>
#include <string.h>


/*int main()
{
		char str[]="www.safgfghuhi.///guhuhioj/bassrdrc//";
		char del[]="./";
		char *ptr;

		puts(str);

		ptr = strtok(str,del);

		while(ptr != NULL)
		{
				puts(ptr);
				ptr = strtok(NULL,del);
		}

		puts(str);

		return 0;
}*/

char *str_tok(char *str, char *del);

int main()
{
		char str[50];
		char del[20];
		printf("give a string: \n");
		scanf("%[^\n]s", str);
		puts("Give charatar to delete from string:");
		scanf(" %[^\n]s", del);
		char *ptr;

		ptr = str_tok(str, del);

		puts(ptr);


		int i=0;

		while(ptr != NULL)
		{
				
				ptr = str_tok(NULL, del);
				puts(ptr);
	
		}

		return 0;
}

char *str_tok(char *str,char *del)
{
		static int pos,count;
		pos = count;
		static char *ptr ;
		if(str != NULL)
		{
				ptr = str;
		}

		for( ;ptr[count] != '\0'; count++)
		{
				for(int j=0; del[j] != '\0';j++)
				{
						if(ptr[count] == del[j])
						{
								ptr[j] = '\0';
								count++;
								puts(ptr);

								return ptr+pos;
						}
				}
		}
		
		return NULL;

}
