/*Author   				: sagar kumar giri
 * Date    				: 19/12/2021
 * Input   				: Read float value.
 * Sample execution  	: Enter any float numer : 23.76
						  Demoted value is 23.000000
						  Do you want to continue (y/Y) : y
						  Enter any float numer : -3.76
						  Demoted value is -3.000000
						  Do you want to continue (y/Y) : y
						  Enter any float numer : 0.76
						  Demoted value is 0.000000
                          Do you want to continue (y/Y) : y
                          Enter any float numer : 1.76
                          Demoted value is 1.000000
                          Do you want to continue (y/Y) : n 		
==================================================================================================================================*/

#include <stdio.h>

//union defination
union float_int
{
		float n;
		struct{
				int unsigned Mantissa:23;
				int  unsigned Expo:8;
				int unsigned sign:1;
		}element;
};
//function declaration
float float_to_int(union float_int *num);

int main()
{
		//variable declaration
		union float_int num;
		float res; 
		char ch;
		do{
				//reading a floating number from user
				printf("Enter any float numer : ");
				scanf(" %f", &num.n);
				//calling a function convert float to like int
				res = float_to_int(&num);
				//printing the result
				//printf("%X",num.element.Mantissa);
				printf("Demoted value is : %f \n", res);

				//suggest user to try another number
				printf("Do you want to continue(y/Y): ");
				scanf(" %c", &ch);

		}while(ch=='y' || ch == 'Y');
		return 0;
}
//function defination 
float float_to_int(union float_int *num)
{
		int def;
		float res;
		int temp = num->element.Expo;
		if(num->element.Expo < 127)
				return res =0;

		def = temp-127;
		res=((((num->element.Mantissa >> (23-def)) & ((1<<def)-1))) | (1 << def));
		if(num->element.sign)
				res = -1*res;

		return res;
}
