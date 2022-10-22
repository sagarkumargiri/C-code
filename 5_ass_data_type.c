/*Author Name          : Sagar kumar giri
 
 * Date                : 8/10/2021
 
 * Input               : No input
 
 * Sample execution    : Size of int: 4 bytes
						 Size of char:1 bytes
						 Size of float:4 bytes
						 Size of double:8 bytes
						 Size of unsigned int:4 bytes
					     Size of long int:8 bytes          */





#include <stdio.h>
int main()
{
		//size of all integer data type
		printf("The size of int                :%zu byte\n", sizeof(int));
		// size of integer data type with modifier
		printf("The size of short int          :%zu byte\n", sizeof(short int));
		printf("The size of long int           :%zu byte\n", sizeof(long int));
		printf("The size of long long int      :%zu byte\n", sizeof(long long int));
		printf("The size of signed int         :%zu byte\n", sizeof(signed int));
		printf("The size of unsigned int       :%zu byte\n", sizeof(unsigned int));
		printf("The size of signed long int    :%zu byte\n", sizeof(signed long int));
		printf("The size of unsinged long int  :%zu byte\n", sizeof(unsigned long int));

		//size of all character data type
		printf("The size of char               :%zu byte\n", sizeof(char));
		printf("The size of signed char        :%zu byte\n", sizeof(signed char));
		printf("The size of unsigned char      :%zu byte\n", sizeof(unsigned char));

		//size of double data type
		printf("The size of double             :%zu byte\n", sizeof(double));
		printf("The size of long double        :%zu byte\n", sizeof(long double));
		//size of float data type
		printf("The size of float              :%zu byte\n", sizeof(float));

		//size of void data type
		printf("The size of void               :%zu byte\n", sizeof(void));


		return 0;
}
