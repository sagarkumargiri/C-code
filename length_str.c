#include <stdio.h>
#include <ctype.h>

void get_str(char *str);

int length_str(char *str);

void copy_str(char *str1, char *str2);

int compare_str(char *str1, char *str2);

int palindrome_str(char *str);

int main()
{

	char str1[40];
	char str2[40];
	char str3[40];
	int length, a, b, c;
	printf("Give the string1: ");
	get_str(str1);
	printf("\n");
	length = length_str(str1);

	printf("The length of the given string is : ");
	printf("%d\n", length);

	printf("\nAfter copy string1 to string2: ");
	copy_str(str1,str2);
	printf("%s", str2);

	printf("\nGive the string3: ");
	get_str(str3);

	printf("\ngive two string no. to compare: ");
	scanf("%d %d", &a, &b);

	if((a == 1 || a == 2 || a == 3) && (b == 1 || b==2 || b==3) && a != b)
	{
			if(a==1 && b == 2)
			{
					if(compare_str(str1,str2) == 1)
							printf("Both string%d and string%d are same\n", a, b);
							
					else
							printf("string are not same\n");
			}
			else if(a == 2 && b == 3)
			{
					if(compare_str(str2,str3) == 1)
							printf("Both strint%d and string%d are same\n", a, b);
					else
							printf("string are not same\n");
			}
			else if(a ==1 && b == 3)
			{
					if(compare_str(str1,str3) == 1)
							printf("Both string%d and string%d are same\n", a, b);
					else
							printf("string are not same \n");
			}

	}
	else
			printf("Invalid string number\n");


	//palindrome
	printf("\nGive the string no. check palindrome : ");
	getchar();
	scanf("%d", &c);
	if(c==1 || c ==2)
			if(palindrome_str(str1) == 1)
					printf("The string%d is palindrome:\n", c);
			else
					printf("The string%d is not palindrome:\n", c);
	else if(c==3)
	{
			if(palindrome_str(str3) == 1)
                    printf("The string%d is palindrome:\n", c);
            else
            		printf("The string%d is not palindrome:\n", c);

	}

	else
			printf("Invalid string number\n");

	




	
	return 0;

}


void get_str(char *str)
{
		fgets(str,39,stdin);
}

//length counter
int length_str(char *str)
{
		int count=0;
		for(int i=0;str[i] != '\0';i++ )
				count++;
		return count;
}

//copy string
void copy_str(char *str1, char *str2)
{
		int i=0;
		for(i =0;str1[i] !='\0';i++)
		{
				str2[i]=str1[i];
		}
}
//compare two string
int compare_str(char *str1, char *str2)
{
		int count=0,i;
		for(int i =0;*(str1+i) != '\0' && *(str2+i) != '\0';i++)
		{
				if(toupper(*(str1+i)) == toupper(*(str2+i)))
								count++;
		}

	/*	while(*str1 !='\0')
		{
				
				if (*str1 == *str2)
						count++;
				str1++;
				str2++;

		}*/
		

		//printf("%d\n", count);

		if(length_str(str1) == count && length_str(str2) == count)
				return 1;
		else
				return 0;
}

int palindrome_str(char *str)
{
		//char temp_str[40];
		int flag;
		int length= length_str(str);
		printf("%d\n", length);
		for(int i=0;i<=length;i++)
		{
				if(*(str+i) != *(str+(length-i-1)))
				{
						flag =0;
						printf("%d", flag);
						break;
				}
		}

		if(flag != 0)
				return 1;
		else
				return 0;
}










