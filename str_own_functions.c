#include <stdio.h>
#include <ctype.h>

void print_dot(void);
void get_str(char* s);
int str_len(char* s);
void str_cpy(char* src, char* des);
int str_cmp(char* s1, char* s2);
int str_n_cmp(char* s1, char* s2, int n);
int str_i_cmp(char* s1, char* s2);
char* str_cat(char* s1, char* s2);
char* str_rev(char* s1);


int main()
{
	/*	print_dot();
		printf("%36s\n", "FUNCTION FOR GET STRING");
		print_dot();
		char str[40];
		puts("Give the string");
		get_str(str);
		puts(str);
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strlen()");
		print_dot();
		char str1[40];
		int len;
		puts("Give the string to calculate the length:");
		get_str(str1);
		len = str_len(str1);
		printf("The length of the given string is : %d\n", len);
//------------------------------------------------------------------
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strcpy()");
		print_dot();
		char str2[40];char str3[40];
		printf("Give source string: ");
		get_str(str2);
		printf("Give destination string: ");
		get_str(str3);
		str_cpy(str2,str3);
		puts("After copy source to destination \n destination string is: ");
		puts(str3);
//---------------------------------------------------------------------- 
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strcpm()");
		print_dot();
		char str4[40]; char str5[40];
		printf("Give string1: ");
		get_str(str4);
		printf("Give string2: ");
		get_str(str5);
		int status = str_cmp(str4,str5);
		if(status)
				printf("Both string are not same & status = %d\n", status);
		else
				printf("Both string are same & status = %d\n", status);
//-------------------------------------------------------------------------- 
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strncpm()");
		print_dot();
		printf("1st string: %s\n", str4);
		printf("2nd string: %s\n", str5);
		printf("give the no. upto which the above string are comapre: ");
		int n, st1=0;
		scanf(" %d", &n);
		st1 = str_n_cmp(str4,str5,n);
		if(st1)
				printf("Both string are not same upto %d element & status = %d\n", n, st1);
		else
				printf("Both string are same upto %d element & status = %d\n", n, st1);
//-------------------------------------------------------------------------------------
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strcpmi()");
          print_dot();
          printf("1st string: %s\n", str4);
          printf("2nd string: %s\n", str5);
          printf("give the no. upto which the above string are comapre: ");
          int st2=0;
          st2 = str_i_cmp(str4,str5);
         if(st2)
                  printf("Both string are not same without case sensitive  & status = %d\n", n, st2);
          else
                  printf("Both string are same without case sensitive & status = %d\n", n, st2);
//----------------------------------------------------------------------------------------------
		print_dot();
          printf("%36s\n", "OWN FUNCTION FOR - strcat()");
          print_dot();
          char str6[40]; char str7[20];
          printf("1st string: ");
          get_str(str6);
          printf("2nd string: ");
          get_str(str7);
          char* ptr;
          
 		   ptr = str_cat(str6,str7);
        printf("After concatenate the both string, string1 is given as: %s\n", ptr);
//--------------------------------------------------------------------------------*/
		
		print_dot();
		printf("%36s\n", "OWN FUNCTION FOR - strrev()");
		print_dot();
		printf("Give a string to reverse it: ");
		char str8[40];
		get_str(str8);
		char* rev;
		rev = str_rev(str8);
		printf("After revsering the string\nreverse string is : %s\n", rev);
//--------------------------------------------------------------------------------
		











		return 0;




}

void print_dot(void)
{
		for(int i =0; i<65; i++)
		{
				printf("-");
		}
		printf("\n");
}

void get_str(char* s)
{
	//	printf("Give the string: ");
		scanf(" %[^\n]s", s);
}

int str_len(char* s)
{
		char *ptr = s;
		while(*s++ != '\0');
		return s-ptr-1;
}
void str_cpy(char* src, char* des)
{
		while(*des++ = *src++);
}
int str_cmp(char* s1, char* s2)
{
		int res=0;
		for(int i =0 ; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
				res += (s1[i] - s2[i]);

		}
		return res;
}
int str_n_cmp(char* s1, char* s2, int n)
{
		int res =0;
		for(int i=0;i < n; i++)
		{
				res += s1[i]-s2[i];
		}
		return res;
}
int str_i_cmp(char* s1, char* s2)
{
		int res=0;
		for(int i=0; s1[i] !=0 && s2[i] !=0; i++)
		{
				res += toupper(s1[i]) - toupper(s2[i]);
				
		}
		return res;
}
char* str_cat(char* s1, char* s2)
{
	
		int i; int len = str_len(s1);
		for( i=0;s2[i] !='\0';i++)
		{
				s1[len + i] = s2[i];
		}
		s1[len + i] ='\0';
		return s1;
}
char* str_rev(char* s1)
{
		int i = 0,len;
		len = str_len(s1);
		while(i<=len)
		{
				char temp = s1[i];
				s1[i] = s1[len-1];
				s1[len-1] = temp;
				i++;
				len--;
		}
		//s1[len -1] = '\0';
		return s1;
}









