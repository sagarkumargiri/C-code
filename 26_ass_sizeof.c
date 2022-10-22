/* Author Name			: Sagar kumar giri
 * Date					: 20/12/2021
 * Input 				: None
 * Sample Execution		: The size of int is: 4 bytes
						  The size of Char is: 1 bytes
						  The size of float is: 4 bytes
						  The size of double is: 8 bytes
						  The size of short int is: 2 bytes
						  The size of long int is: 8 bytes
						  The size of long long int is: 8 bytes
						  The size of long double is: 16 bytes
						  The size of unsigned int is: 4 bytes
						  The size of signed int is: 4 bytes
						  The size of const int is: 4 bytes
						  The size of unsigned char is: 1 bytes
						  The size of signed char is: 1 bytes
						  The size of unsigned short is: 2 bytes
						  The size of signed short is: 2 bytes
 						  The size of unsigned long is: 8 bytes
						  The size of signed long is: 8 bytes
*/

#include<stdio.h>
/* Maco define */
#define SIZE_OF(x)           (char*)(&x+1)-(char*)(&x)

int main()
{
	//Variables Declaration
	 int num;
 	 char ch;
	 float fl;
 	 double dl;
 	 short int shnum;
 	 long int lgnum;
 	 long long int llnum;
 	 long double ld;
	 unsigned int num1;
 	 signed int num2;
 	 const int con;
 	 unsigned char ch1;
 	 signed char ch2;
 	 unsigned short num3;
 	 signed short num4;
 	 unsigned long num5;
 	 signed long num6;

 	 //Print size of all datatypes variable
 	 printf("The size of int is           : %zu bytes\n",SIZE_OF(num));    //Size of int datatype
 	 printf("The size of Char is          : %zu bytes\n",SIZE_OF(ch));     //Size of char datatype
 	 printf("The size of float is         : %zu bytes\n",SIZE_OF(fl));     //Size of float datatype
 	 printf("The size of double is        : %zu bytes\n",SIZE_OF(dl));     //Size of double datatype
 	 printf("The size of short int is     : %zu bytes\n",SIZE_OF(shnum));  //Size of short int datatype
 	 printf("The size of long int is      : %zu bytes\n",SIZE_OF(lgnum));               //Size of long int datatype
 	 printf("The size of long long int is : %zu bytes\n",SIZE_OF(llnum));          //Size of long long int datatype
 	 printf("The size of long double is   : %zu bytes\n",SIZE_OF(ld));               //Size of long double datatype
 	 printf("The size of unsigned int is  : %zu bytes\n",SIZE_OF(num1));            //Size of unsigned int datatype
 	 printf("The size of signed int is    : %zu bytes\n",SIZE_OF(num2));              //Size of signed int datatype
 	 printf("The size of const int is     : %zu bytes\n",SIZE_OF(con));                //Size of const int datatype
 	 printf("The size of unsigned char is : %zu bytes\n",SIZE_OF(ch1));            //Size of unsigned char datatype
 	 printf("The size of signed char is   : %zu bytes\n",SIZE_OF(ch2));              //Size of signed char datatype
 	 printf("The size of unsigned short is: %zu bytes\n",SIZE_OF(num3));          //Size of unsigned short datatype
 	 printf("The size of signed short is  : %zu bytes\n",SIZE_OF(num4));            //Size of signed short datatype
 	 printf("The size of unsigned long is : %zu bytes\n",SIZE_OF(num5));           //Size of unsigned long datatype
 	 printf("The size of signed long is   : %zu bytes\n",SIZE_OF(num6));             //Size of signed long datatype

	return 0;
}
