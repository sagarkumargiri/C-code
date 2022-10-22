#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>


void my_printf(char *fmt,...);
void my_scanf(char *fmt,...);


int main()
{
		int num;
		char ch;
		char str[10];
		float f;
		my_printf("Give a int : ");
		scanf("%d", &num);




		return 0;


}


void my_printf(char *fmt,...)
{
	va_list ap;
	va_start(ap,fmt);

	int x;
	char arr[20];
	char ch;
	char *str;
	float f;

	while(*fmt!='\0')
	{
		if(*fmt=='%')
		{
			fmt++;
			switch(*fmt)
			{
				case 'd':
						x = va_arg(ap,int);
						itoa(x,arr,10);
						puts(arr);
						break;
				case 'c':
						ch = va_arg(ap,int);
						fprintf(stdout,"%c",ch);
						break;
				case 's':
						str = va_arg(ap,char *);
						fprintf(stdout,"%s",str);
						break;
				case 'f':
						f = va_arg(ap,double);
						fprintf(stdout,"%f",f);
						break;
			}
		}
		else
		{
			putchar(*fmt);
		}
		fmt++;
	}
	va_end(ap);
}
