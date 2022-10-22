#include<stdio.h>
#include<stdarg.h>

void my_printf(char *fmt,...);
void my_scanf(char *fmt,...);

int main()
{
	int num;
	char ch;
	char str[10];
	float f;
	double d;
	long int ld;
	long unsigned int num1;

	my_printf("Enter a number: ");
	my_scanf("%d",&num);

	my_printf("Enter a character: ");
	my_scanf("%c", &ch);
	
	my_printf("Enter a string: ");
	my_scanf(" %s",str);

	my_printf("Enter a float: ");
	my_scanf(" %f",&f);

	my_printf("Enter a double: ");
	my_scanf("%lf", &d);

	my_printf("Enter a long integer: ");
	my_scanf("%ld", &ld);

	my_printf("Enter a number to hexa: ");
	my_scanf("%lx", &num1);


	my_printf("Number is      : %d\n",num);
	my_printf("Character is   : %c\n",ch);
	my_printf("String is      : %s\n",str);
	my_printf("Float is       : %f\n", f);
	my_printf("Double is      : %lf\n", d);
	my_printf("Long int is    : %ld\n", ld);
	my_printf("hexa decimal is: %lx\n", num1);

	return 0;
}

void my_printf(char *fmt,...)
{
	va_list ap;
	va_start(ap,fmt);

	int x;
	char ch;
	char *str;
	float f;
	double d;
	long int ld;
	long unsigned int num1;

	while(*fmt!='\0')
	{
		if(*fmt=='%')
		{
			fmt++;
			switch(*fmt)
			{
				case 'd':
						x = va_arg(ap,int);
						fprintf(stdout,"%d",x);
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
				case 'l':
						fmt++;
						switch(*fmt)
						{
								case 'f':
										d = va_arg(ap, double);
										fprintf(stdout,"%lf",d);
										break;
								case 'd':
										ld = va_arg(ap, long int);
										fprintf(stdout,"%ld",ld);
										break;
								case 'x':
										num1 = va_arg(ap,long unsigned int);
										fprintf(stdout,"%lx",num1);
										break;

						}



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
void my_scanf(char *fmt,...)
{
	va_list ap;
	va_start(ap,fmt);

	int *x;
	char *ch;
	char *str;
	float *f;
	double *d;
	long int *ld, *num1;
	
	while(*fmt!='\0')
	{
		if(*fmt == '%')
		{
			fmt++;
			switch(*fmt)
			{
				case 'd':
						x = va_arg(ap,int *);
						fscanf(stdin,"%d",x);
						break;
				case 'c':
						getchar();
						ch = va_arg(ap,char *);
						fscanf(stdin,"%c",ch);
						break;
				case 's':
						str = va_arg(ap,char *);
						fscanf(stdin,"%s",str);
						break;
				case 'f':
						getchar();
						f = va_arg(ap,float *);
						fscanf(stdin,"%f",f);
						break;
				case 'l':
						fmt++;
						getchar();
					    switch(*fmt)
						{
								case 'f':
										d = va_arg(ap,double *);
										fscanf(stdin,"%lf",d);
										break;
								case 'd':
										ld = va_arg(ap,long int *);
										fscanf(stdin,"%ld",ld);
										break;
								case 'x':
										num1 = va_arg(ap,long int*);
										fscanf(stdin,"%ld", num1);
										break;
						}
			}
		}
		fmt++;
	}
	va_end(ap);
}

